/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_EUTRA_FrequencyList_r9_H_
#define	_EUTRA_FrequencyList_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EUTRA-FrequencyRemoval.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EUTRA_FrequencyInfoList;
struct EUTRA_SIAcquisition;

/* EUTRA-FrequencyList-r9 */
typedef struct EUTRA_FrequencyList_r9 {
	EUTRA_FrequencyRemoval_t	 eutraFrequencyRemoval;
	struct EUTRA_FrequencyInfoList	*eutraNewFrequencies	/* OPTIONAL */;
	struct EUTRA_SIAcquisition	*eutraSIAcquisition	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_FrequencyList_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_FrequencyList_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EUTRA-FrequencyInfoList.h"
#include "EUTRA-SIAcquisition.h"

#endif	/* _EUTRA_FrequencyList_r9_H_ */
#include <asn_internal.h>