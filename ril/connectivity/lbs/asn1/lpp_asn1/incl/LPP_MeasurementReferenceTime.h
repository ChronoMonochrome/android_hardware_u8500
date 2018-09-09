/*
 * LPP_MeasurementReferenceTime.h
 *
 * Copyright (C) ST-Ericsson SA 2010. All rights reserved.
 * Author: sunilsatish.rao@stericsson.com for ST-Ericsson.
 * License terms: Redistribution and modifications are permitted subject to BSD license.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of ST-Ericsson nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ST-ERICSSON BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP_PDU-Definitions"
 * 	found in "LPP_RRLP_Rel_10.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_LPP_MeasurementReferenceTime_H_
#define	_LPP_MeasurementReferenceTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LPP_GNSS-ID.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_MeasurementReferenceTime__networkTime_PR {
	LPP_MeasurementReferenceTime__networkTime_PR_NOTHING,	/* No components present */
	LPP_MeasurementReferenceTime__networkTime_PR_eUTRA,
	LPP_MeasurementReferenceTime__networkTime_PR_uTRA,
	LPP_MeasurementReferenceTime__networkTime_PR_gSM,
	/* Extensions may appear below */
	
} LPP_MeasurementReferenceTime__networkTime_PR;
typedef enum LPP_MeasurementReferenceTime__networkTime__uTRA__mode_PR {
	LPP_MeasurementReferenceTime__networkTime__uTRA__mode_PR_NOTHING,	/* No components present */
	LPP_MeasurementReferenceTime__networkTime__uTRA__mode_PR_fdd,
	LPP_MeasurementReferenceTime__networkTime__uTRA__mode_PR_tdd
} LPP_MeasurementReferenceTime__networkTime__uTRA__mode_PR;

/* Forward declarations */
struct LPP_CellGlobalIdEUTRA_AndUTRA;
struct LPP_CellGlobalIdGERAN;

/* LPP_MeasurementReferenceTime */
typedef struct LPP_MeasurementReferenceTime {
	long	 gnss_TOD_msec;
	long	*gnss_TOD_frac	/* OPTIONAL */;
	long	*gnss_TOD_unc	/* OPTIONAL */;
	LPP_GNSS_ID_t	 gnss_TimeID;
	struct LPP_MeasurementReferenceTime__networkTime {
		LPP_MeasurementReferenceTime__networkTime_PR present;
		union LPP_MeasurementReferenceTime__networkTime_u {
			struct LPP_MeasurementReferenceTime__networkTime__eUTRA {
				long	 physCellId;
				struct LPP_CellGlobalIdEUTRA_AndUTRA	*cellGlobalId	/* OPTIONAL */;
				BIT_STRING_t	 systemFrameNumber;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} eUTRA;
			struct LPP_MeasurementReferenceTime__networkTime__uTRA {
				struct LPP_MeasurementReferenceTime__networkTime__uTRA__mode {
					LPP_MeasurementReferenceTime__networkTime__uTRA__mode_PR present;
					union LPP_MeasurementReferenceTime__networkTime__uTRA__mode_u {
						struct LPP_MeasurementReferenceTime__networkTime__uTRA__mode__fdd {
							long	 primary_CPICH_Info;
							/*
							 * This type is extensible,
							 * possible extensions are below.
							 */
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} fdd;
						struct LPP_MeasurementReferenceTime__networkTime__uTRA__mode__tdd {
							long	 cellParameters;
							/*
							 * This type is extensible,
							 * possible extensions are below.
							 */
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} tdd;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} mode;
				struct LPP_CellGlobalIdEUTRA_AndUTRA	*cellGlobalId	/* OPTIONAL */;
				long	 referenceSystemFrameNumber;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} uTRA;
			struct LPP_MeasurementReferenceTime__networkTime__gSM {
				long	 bcchCarrier;
				long	 bsic;
				struct LPP_CellGlobalIdGERAN	*cellGlobalId	/* OPTIONAL */;
				struct LPP_MeasurementReferenceTime__networkTime__gSM__referenceFrame {
					long	 referenceFN;
					long	*referenceFNMSB	/* OPTIONAL */;
					/*
					 * This type is extensible,
					 * possible extensions are below.
					 */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} referenceFrame;
				long	*deltaGNSS_TOD	/* OPTIONAL */;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} gSM;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *networkTime;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_MeasurementReferenceTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_MeasurementReferenceTime;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LPP_CellGlobalIdEUTRA-AndUTRA.h"
#include "LPP_CellGlobalIdGERAN.h"

#endif	/* _LPP_MeasurementReferenceTime_H_ */