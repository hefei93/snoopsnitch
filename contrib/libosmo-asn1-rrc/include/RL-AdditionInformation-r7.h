/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RL_AdditionInformation_r7_H_
#define	_RL_AdditionInformation_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrimaryCPICH-Info.h"
#include "CellIdentity.h"
#include "DL-DPCH-InfoPerRL-r5.h"
#include "DL-FDPCH-InfoPerRL-r7.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RL_AdditionInformation_r7__dl_dpchInfo_PR {
	RL_AdditionInformation_r7__dl_dpchInfo_PR_NOTHING,	/* No components present */
	RL_AdditionInformation_r7__dl_dpchInfo_PR_dl_DPCH_InfoPerRL,
	RL_AdditionInformation_r7__dl_dpchInfo_PR_dl_FDPCH_InfoPerRL
} RL_AdditionInformation_r7__dl_dpchInfo_PR;

/* Forward declarations */
struct E_HICH_Information;
struct E_RGCH_Information;

/* RL-AdditionInformation-r7 */
typedef struct RL_AdditionInformation_r7 {
	PrimaryCPICH_Info_t	 primaryCPICH_Info;
	CellIdentity_t	*cell_Id	/* OPTIONAL */;
	struct RL_AdditionInformation_r7__dl_dpchInfo {
		RL_AdditionInformation_r7__dl_dpchInfo_PR present;
		union RL_AdditionInformation_r7__dl_dpchInfo_u {
			DL_DPCH_InfoPerRL_r5_t	 dl_DPCH_InfoPerRL;
			DL_FDPCH_InfoPerRL_r7_t	 dl_FDPCH_InfoPerRL;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} dl_dpchInfo;
	struct E_HICH_Information	*e_HICH_Information	/* OPTIONAL */;
	struct E_RGCH_Information	*e_RGCH_Information	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RL_AdditionInformation_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RL_AdditionInformation_r7;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "E-HICH-Information.h"
#include "E-RGCH-Information.h"

#endif	/* _RL_AdditionInformation_r7_H_ */
#include <asn_internal.h>