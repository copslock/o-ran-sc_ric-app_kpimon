/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "KPIMonitoringModule"
 * 	found in "KPIMonitoring.asn1"
 * 	`asn1c -gen-PER`
 */

#ifndef	_CuCpResourceStatus_H_
#define	_CuCpResourceStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CuCpResourceStatus */
typedef struct CuCpResourceStatus {
	long	 bhca;
	long	*numberOfUEs	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CuCpResourceStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CuCpResourceStatus;
extern asn_SEQUENCE_specifics_t asn_SPC_CuCpResourceStatus_specs_1;
extern asn_TYPE_member_t asn_MBR_CuCpResourceStatus_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CuCpResourceStatus_H_ */
#include <asn_internal.h>
