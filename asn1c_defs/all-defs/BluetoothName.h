/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_BluetoothName_H_
#define	_BluetoothName_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BluetoothName */
typedef OCTET_STRING_t	 BluetoothName_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_BluetoothName_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_BluetoothName;
asn_struct_free_f BluetoothName_free;
asn_struct_print_f BluetoothName_print;
asn_constr_check_f BluetoothName_constraint;
ber_type_decoder_f BluetoothName_decode_ber;
der_type_encoder_f BluetoothName_encode_der;
xer_type_decoder_f BluetoothName_decode_xer;
xer_type_encoder_f BluetoothName_encode_xer;
per_type_decoder_f BluetoothName_decode_uper;
per_type_encoder_f BluetoothName_encode_uper;
per_type_decoder_f BluetoothName_decode_aper;
per_type_encoder_f BluetoothName_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _BluetoothName_H_ */
#include <asn_internal.h>