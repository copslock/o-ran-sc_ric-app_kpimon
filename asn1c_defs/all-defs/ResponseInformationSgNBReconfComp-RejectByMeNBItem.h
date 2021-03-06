/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_ResponseInformationSgNBReconfComp_RejectByMeNBItem_H_
#define	_ResponseInformationSgNBReconfComp_RejectByMeNBItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ResponseInformationSgNBReconfComp-RejectByMeNBItem */
typedef struct ResponseInformationSgNBReconfComp_RejectByMeNBItem {
	Cause_t	 cause;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ResponseInformationSgNBReconfComp_RejectByMeNBItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResponseInformationSgNBReconfComp_RejectByMeNBItem;
extern asn_SEQUENCE_specifics_t asn_SPC_ResponseInformationSgNBReconfComp_RejectByMeNBItem_specs_1;
extern asn_TYPE_member_t asn_MBR_ResponseInformationSgNBReconfComp_RejectByMeNBItem_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ResponseInformationSgNBReconfComp_RejectByMeNBItem_H_ */
#include <asn_internal.h>
