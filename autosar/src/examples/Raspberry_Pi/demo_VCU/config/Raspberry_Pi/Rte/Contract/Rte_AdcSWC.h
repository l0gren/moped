/**
 * Application Header File
 *
 * @req SWS_Rte_01003
 */

/** === HEADER ====================================================================================
 */

/** --- C++ guard ---------------------------------------------------------------------------------
 * @req SWS_Rte_03709
 */
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** --- Normal include guard ----------------------------------------------------------------------
 */
#ifndef RTE_ADCSWC_H_
#define RTE_ADCSWC_H_

/** --- Duplicate application include guard -------------------------------------------------------
 * @req SWS_Rte_01006
 */
#ifdef RTE_APPLICATION_HEADER_FILE
#error Multiple application header files included.
#endif
#define RTE_APPLICATION_HEADER_FILE

/** --- Single runnable API -----------------------------------------------------------------------
 * @req SWS_Rte_02751
 */
#if defined(RTE_RUNNABLEAPI_AdcSensorWriteRunnable) || \
defined(RTE_RUNNABLEAPI_AdcSensorReadRunnable)
#define RTE_RUNNABLEAPI
#endif

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_02751
 * @req SWS_Rte_07131
 */
#include <Rte_DataHandleType.h>
#include <Rte_AdcSWC_Type.h>

/** --- PIM DATA TYPES ------------------------------------------------------------------------------ */

/** === BODY ======================================================================================
 */

/** @req SWS_Rte_03731
 *  @req SWS_Rte_07137
 *  @req SWS_Rte_07138
 *  !req SWS_Rte_06523
 *  @req SWS_Rte_03730
 *  @req SWS_Rte_07677
 *  @req SWS_Rte_02620
 *  @req SWS_Rte_02621
 *  @req SWS_Rte_01055
 *  @req SWS_Rte_03726 */

/** @req SWS_Rte_01343
 *  @req SWS_Rte_01342
 *  !req SWS_Rte_06524
 *  @req SWS_Rte_01053
 */

extern Std_ReturnType Rte_Call_AdcSWC_AdcSWCProto_AdcSwcReadDataFromAdcDriverPort2_Read(/*IN*/UInt32* Data);

/** @req SWS_Rte_07132
 *  @req SWS_Rte_03714 */
typedef struct {
    Rte_DE_UInt32 * const AdcSensorWriteRunnable_AdcSwcWriteDataToPirteSwcPort1_dataInt32;
} Rte_CDS_AdcSWC;

/** --- Instance handle type ---------------------------------------------------------------------- */
typedef Rte_CDS_AdcSWC const * const Rte_Instance;

/** --- Singleton instance handle -----------------------------------------------------------------
 *  @req SWS_Rte_03793
 */
extern const Rte_Instance Rte_Inst_AdcSWC;
#define self (Rte_Inst_AdcSWC)

/** --- Calibration API --------------------------------------------------------------------------- */

/** --- Per Instance Memory API ------------------------------------------------------------------- */

/** --- Single Runnable APIs ---------------------------------------------------------------------- */
#if defined(RTE_RUNNABLEAPI)
/** --- AdcSensorWriteRunnable */
#if defined(RTE_RUNNABLEAPI_AdcSensorWriteRunnable)

void AdcSensorWriteRunnable(void);

static inline void Rte_IWrite_AdcSensorWriteRunnable_AdcSwcWriteDataToPirteSwcPort1_dataInt32(/*IN*/UInt32 value) {
    self->AdcSensorWriteRunnable_AdcSwcWriteDataToPirteSwcPort1_dataInt32->value = value;
}

#endif

/** --- AdcSensorReadRunnable */
#if defined(RTE_RUNNABLEAPI_AdcSensorReadRunnable)

void AdcSensorReadRunnable(void);

static inline Std_ReturnType Rte_Call_AdcSwcReadDataFromAdcDriverPort2_Read(/*IN*/UInt32 Data) {
    return Rte_Call_AdcSWC_AdcSWCProto_AdcSwcReadDataFromAdcDriverPort2_Read(Data);
}

#endif
#endif

/** --- All Runnable APIs ------------------------------------------------------------------------- */
#if !defined(RTE_RUNNABLEAPI)
void AdcSensorWriteRunnable(void);

static inline void Rte_IWrite_AdcSensorWriteRunnable_AdcSwcWriteDataToPirteSwcPort1_dataInt32(/*IN*/UInt32 value) {
    self->AdcSensorWriteRunnable_AdcSwcWriteDataToPirteSwcPort1_dataInt32->value = value;
}

void AdcSensorReadRunnable(void);

static inline Std_ReturnType Rte_Call_AdcSwcReadDataFromAdcDriverPort2_Read(/*IN*/UInt32* Data) {
    return Rte_Call_AdcSWC_AdcSWCProto_AdcSwcReadDataFromAdcDriverPort2_Read(Data);
}
#endif

/** === FOOTER ====================================================================================
 */

#endif /* RTE_ADCSWC_H_ */

/** @req SWS_Rte_03710 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
