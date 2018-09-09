/*
 * LPP_GNSS-SupportElement.c
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

#include "LPP_GNSS-SupportElement.h"

static asn_TYPE_member_t asn_MBR_fta_MeasSupport_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_SupportElement__fta_MeasSupport, cellTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_AccessTypes,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_SupportElement__fta_MeasSupport, mode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_PositioningModes,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mode"
		},
};
static ber_tlv_tag_t asn_DEF_fta_MeasSupport_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fta_MeasSupport_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellTime at 3928 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mode at 3929 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fta_MeasSupport_specs_6 = {
	sizeof(struct LPP_GNSS_SupportElement__fta_MeasSupport),
	offsetof(struct LPP_GNSS_SupportElement__fta_MeasSupport, _asn_ctx),
	asn_MAP_fta_MeasSupport_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fta_MeasSupport_6 = {
	"fta-MeasSupport",
	"fta-MeasSupport",
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
	asn_DEF_fta_MeasSupport_tags_6,
	sizeof(asn_DEF_fta_MeasSupport_tags_6)
		/sizeof(asn_DEF_fta_MeasSupport_tags_6[0]) - 1, /* 1 */
	asn_DEF_fta_MeasSupport_tags_6,	/* Same as above */
	sizeof(asn_DEF_fta_MeasSupport_tags_6)
		/sizeof(asn_DEF_fta_MeasSupport_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fta_MeasSupport_6,
	2,	/* Elements count */
	&asn_SPC_fta_MeasSupport_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LPP_GNSS_SupportElement_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_SupportElement, gnss_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gnss-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_GNSS_SupportElement, sbas_IDs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_SBAS_IDs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sbas-IDs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_SupportElement, agnss_Modes),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_PositioningModes,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"agnss-Modes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_SupportElement, gnss_Signals),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_SignalIDs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gnss-Signals"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_GNSS_SupportElement, fta_MeasSupport),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fta_MeasSupport_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fta-MeasSupport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_SupportElement, adr_Support),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"adr-Support"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_SupportElement, velocityMeasurementSupport),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"velocityMeasurementSupport"
		},
};
static int asn_MAP_LPP_GNSS_SupportElement_oms_1[] = { 1, 4 };
static ber_tlv_tag_t asn_DEF_LPP_GNSS_SupportElement_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LPP_GNSS_SupportElement_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-ID at 3923 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sbas-IDs at 3924 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* agnss-Modes at 3925 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* gnss-Signals at 3926 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* fta-MeasSupport at 3928 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* adr-Support at 3932 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* velocityMeasurementSupport at 3933 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_SupportElement_specs_1 = {
	sizeof(struct LPP_GNSS_SupportElement),
	offsetof(struct LPP_GNSS_SupportElement, _asn_ctx),
	asn_MAP_LPP_GNSS_SupportElement_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_LPP_GNSS_SupportElement_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	6,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_SupportElement = {
	"LPP_GNSS-SupportElement",
	"LPP_GNSS-SupportElement",
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
	asn_DEF_LPP_GNSS_SupportElement_tags_1,
	sizeof(asn_DEF_LPP_GNSS_SupportElement_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_SupportElement_tags_1[0]), /* 1 */
	asn_DEF_LPP_GNSS_SupportElement_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_GNSS_SupportElement_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_SupportElement_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LPP_GNSS_SupportElement_1,
	7,	/* Elements count */
	&asn_SPC_LPP_GNSS_SupportElement_specs_1	/* Additional specs */
};
