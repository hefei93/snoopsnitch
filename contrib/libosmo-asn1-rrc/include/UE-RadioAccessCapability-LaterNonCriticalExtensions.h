/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_RadioAccessCapability_LaterNonCriticalExtensions_H_
#define	_UE_RadioAccessCapability_LaterNonCriticalExtensions_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-RadioAccessCapability-v9c0ext-IEs.h"
#include "UE-RadioAccessCapability-vaa0ext-IEs.h"
#include "UE-RadioAccessCapability-vb50ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-RadioAccessCapability-LaterNonCriticalExtensions */
typedef struct UE_RadioAccessCapability_LaterNonCriticalExtensions {
	struct UE_RadioAccessCapability_LaterNonCriticalExtensions__v9c0NonCriticalExtensions {
		UE_RadioAccessCapability_v9c0ext_IEs_t	 ue_RadioAccessCapability_v9c0ext;
		struct UE_RadioAccessCapability_LaterNonCriticalExtensions__v9c0NonCriticalExtensions__vaa0NonCriticalExtensions {
			UE_RadioAccessCapability_vaa0ext_IEs_t	 ue_RadioAccessCapability_vaa0ext;
			struct UE_RadioAccessCapability_LaterNonCriticalExtensions__v9c0NonCriticalExtensions__vaa0NonCriticalExtensions__vb50NonCriticalExtensions {
				UE_RadioAccessCapability_vb50ext_IEs_t	 ue_RadioAccessCapability_vb50ext;
				struct UE_RadioAccessCapability_LaterNonCriticalExtensions__v9c0NonCriticalExtensions__vaa0NonCriticalExtensions__vb50NonCriticalExtensions__nonCriticalExtensions {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *nonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *vb50NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *vaa0NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} v9c0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RadioAccessCapability_LaterNonCriticalExtensions_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapability_LaterNonCriticalExtensions;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_RadioAccessCapability_LaterNonCriticalExtensions_H_ */
#include <asn_internal.h>
