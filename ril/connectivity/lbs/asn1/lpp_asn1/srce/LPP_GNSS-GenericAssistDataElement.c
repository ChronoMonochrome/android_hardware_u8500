/*
 * LPP_GNSS-GenericAssistDataElement.c
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

#include <asn_internal.h>

#include "LPP_GNSS-GenericAssistDataElement.h"

static asn_TYPE_member_t asn_MBR_LPP_GNSS_GenericAssistDataElement_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_GenericAssistDataElement, gnss_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gnss-ID"
		},
	{ ATF_POINTER, 10, offsetof(struct LPP_GNSS_GenericAssistDataElement, sbas_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_SBAS_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sbas-ID"
		},
	{ ATF_POINTER, 9, offsetof(struct LPP_GNSS_GenericAssistDataElement, gnss_TimeModels),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_TimeModelList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gnss-TimeModels"
		},
	{ ATF_POINTER, 8, offsetof(struct LPP_GNSS_GenericAssistDataElement, gnss_DifferentialCorrections),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_DifferentialCorrections,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gnss-DifferentialCorrections"
		},
	{ ATF_POINTER, 7, offsetof(struct LPP_GNSS_GenericAssistDataElement, gnss_NavigationModel),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_NavigationModel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gnss-NavigationModel"
		},
	{ ATF_POINTER, 6, offsetof(struct LPP_GNSS_GenericAssistDataElement, gnss_RealTimeIntegrity),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_RealTimeIntegrity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gnss-RealTimeIntegrity"
		},
	{ ATF_POINTER, 5, offsetof(struct LPP_GNSS_GenericAssistDataElement, gnss_DataBitAssistance),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_DataBitAssistance,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gnss-DataBitAssistance"
		},
	{ ATF_POINTER, 4, offsetof(struct LPP_GNSS_GenericAssistDataElement, gnss_AcquisitionAssistance),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_AcquisitionAssistance,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gnss-AcquisitionAssistance"
		},
	{ ATF_POINTER, 3, offsetof(struct LPP_GNSS_GenericAssistDataElement, gnss_Almanac),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_Almanac,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gnss-Almanac"
		},
	{ ATF_POINTER, 2, offsetof(struct LPP_GNSS_GenericAssistDataElement, gnss_UTC_Model),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_UTC_Model,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gnss-UTC-Model"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_GNSS_GenericAssistDataElement, gnss_AuxiliaryInformation),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_AuxiliaryInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gnss-AuxiliaryInformation"
		},
};
static int asn_MAP_LPP_GNSS_GenericAssistDataElement_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
static ber_tlv_tag_t asn_DEF_LPP_GNSS_GenericAssistDataElement_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LPP_GNSS_GenericAssistDataElement_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-ID at 3030 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sbas-ID at 3031 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gnss-TimeModels at 3032 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* gnss-DifferentialCorrections at 3033 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* gnss-NavigationModel at 3034 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* gnss-RealTimeIntegrity at 3035 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* gnss-DataBitAssistance at 3036 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* gnss-AcquisitionAssistance at 3037 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* gnss-Almanac at 3038 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* gnss-UTC-Model at 3039 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* gnss-AuxiliaryInformation at 3040 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_GenericAssistDataElement_specs_1 = {
	sizeof(struct LPP_GNSS_GenericAssistDataElement),
	offsetof(struct LPP_GNSS_GenericAssistDataElement, _asn_ctx),
	asn_MAP_LPP_GNSS_GenericAssistDataElement_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_LPP_GNSS_GenericAssistDataElement_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	10,	/* Start extensions */
	12	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_GenericAssistDataElement = {
	"LPP_GNSS-GenericAssistDataElement",
	"LPP_GNSS-GenericAssistDataElement",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_LPP_GNSS_GenericAssistDataElement_tags_1,
	sizeof(asn_DEF_LPP_GNSS_GenericAssistDataElement_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_GenericAssistDataElement_tags_1[0]), /* 1 */
	asn_DEF_LPP_GNSS_GenericAssistDataElement_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_GNSS_GenericAssistDataElement_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_GenericAssistDataElement_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LPP_GNSS_GenericAssistDataElement_1,
	11,	/* Elements count */
	&asn_SPC_LPP_GNSS_GenericAssistDataElement_specs_1	/* Additional specs */
};
