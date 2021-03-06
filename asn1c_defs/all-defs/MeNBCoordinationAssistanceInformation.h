/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_MeNBCoordinationAssistanceInformation_H_
#define	_MeNBCoordinationAssistanceInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeNBCoordinationAssistanceInformation {
	MeNBCoordinationAssistanceInformation_coordination_not_required	= 0
	/*
	 * Enumeration is extensible
	 */
} e_MeNBCoordinationAssistanceInformation;

/* MeNBCoordinationAssistanceInformation */
typedef long	 MeNBCoordinationAssistanceInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeNBCoordinationAssistanceInformation;
asn_struct_free_f MeNBCoordinationAssistanceInformation_free;
asn_struct_print_f MeNBCoordinationAssistanceInformation_print;
asn_constr_check_f MeNBCoordinationAssistanceInformation_constraint;
ber_type_decoder_f MeNBCoordinationAssistanceInformation_decode_ber;
der_type_encoder_f MeNBCoordinationAssistanceInformation_encode_der;
xer_type_decoder_f MeNBCoordinationAssistanceInformation_decode_xer;
xer_type_encoder_f MeNBCoordinationAssistanceInformation_encode_xer;
per_type_decoder_f MeNBCoordinationAssistanceInformation_decode_uper;
per_type_encoder_f MeNBCoordinationAssistanceInformation_encode_uper;
per_type_decoder_f MeNBCoordinationAssistanceInformation_decode_aper;
per_type_encoder_f MeNBCoordinationAssistanceInformation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MeNBCoordinationAssistanceInformation_H_ */
#include <asn_internal.h>
