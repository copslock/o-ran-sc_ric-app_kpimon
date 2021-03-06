/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_ServedNRCellsToActivate_Item_H_
#define	_ServedNRCellsToActivate_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NRCGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ServedNRCellsToActivate-Item */
typedef struct ServedNRCellsToActivate_Item {
	NRCGI_t	 nrCellID;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedNRCellsToActivate_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServedNRCellsToActivate_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_ServedNRCellsToActivate_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ServedNRCellsToActivate_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ServedNRCellsToActivate_Item_H_ */
#include <asn_internal.h>
