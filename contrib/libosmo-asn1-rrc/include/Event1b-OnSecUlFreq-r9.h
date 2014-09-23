/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_Event1b_OnSecUlFreq_r9_H_
#define	_Event1b_OnSecUlFreq_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TriggeringCondition1.h"
#include "ReportingRange.h"
#include "W.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ForbiddenAffectCellListOnSecULFreq;
struct PeriodicReportingInfo_1b;

/* Event1b-OnSecUlFreq-r9 */
typedef struct Event1b_OnSecUlFreq_r9 {
	TriggeringCondition1_t	 triggeringCondition;
	ReportingRange_t	 reportingRange;
	struct ForbiddenAffectCellListOnSecULFreq	*forbiddenAffectCellListOnSecULFreq	/* OPTIONAL */;
	W_t	 w;
	struct PeriodicReportingInfo_1b	*periodicReportingInfo_1b	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Event1b_OnSecUlFreq_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Event1b_OnSecUlFreq_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ForbiddenAffectCellListOnSecULFreq.h"
#include "PeriodicReportingInfo-1b.h"

#endif	/* _Event1b_OnSecUlFreq_r9_H_ */
#include <asn_internal.h>