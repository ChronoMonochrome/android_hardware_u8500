/*
 * LPP_NetworkTime.c
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

#include "LPP_NetworkTime.h"

static int
memb_physCellId_constraint_6(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 503)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_primary_CPICH_Info_constraint_13(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 511)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_cellParameters_constraint_16(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 127)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_bcchCarrier_constraint_22(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_bsic_constraint_22(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_secondsFromFrameStructureStart_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 12533)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_fractionalSecondsFromFrameStructureStart_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3999999)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_frameDrift_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -64 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_physCellId_constr_7 = {
	{ APC_CONSTRAINED,	 9,  9,  0,  503 }	/* (0..503) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_eUTRA_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime__cellID__eUTRA, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_physCellId_constraint_6,
		&asn_PER_memb_physCellId_constr_7,
		0,
		"physCellId"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_NetworkTime__cellID__eUTRA, cellGlobalIdEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_CellGlobalIdEUTRA_AndUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellGlobalIdEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime__cellID__eUTRA, earfcn),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"earfcn"
		},
};
static int asn_MAP_eUTRA_oms_6[] = { 1 };
static ber_tlv_tag_t asn_DEF_eUTRA_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_eUTRA_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId at 3087 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellGlobalIdEUTRA at 3088 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* earfcn at 3089 */
};
static asn_SEQUENCE_specifics_t asn_SPC_eUTRA_specs_6 = {
	sizeof(struct LPP_NetworkTime__cellID__eUTRA),
	offsetof(struct LPP_NetworkTime__cellID__eUTRA, _asn_ctx),
	asn_MAP_eUTRA_tag2el_6,
	3,	/* Count of tags in the map */
	asn_MAP_eUTRA_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eUTRA_6 = {
	"eUTRA",
	"eUTRA",
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
	asn_DEF_eUTRA_tags_6,
	sizeof(asn_DEF_eUTRA_tags_6)
		/sizeof(asn_DEF_eUTRA_tags_6[0]) - 1, /* 1 */
	asn_DEF_eUTRA_tags_6,	/* Same as above */
	sizeof(asn_DEF_eUTRA_tags_6)
		/sizeof(asn_DEF_eUTRA_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_eUTRA_6,
	3,	/* Elements count */
	&asn_SPC_eUTRA_specs_6	/* Additional specs */
};

static asn_per_constraints_t asn_PER_memb_primary_CPICH_Info_constr_14 = {
	{ APC_CONSTRAINED,	 9,  9,  0,  511 }	/* (0..511) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_fdd_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime__cellID__uTRA__mode__fdd, primary_CPICH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_primary_CPICH_Info_constraint_13,
		&asn_PER_memb_primary_CPICH_Info_constr_14,
		0,
		"primary-CPICH-Info"
		},
};
static ber_tlv_tag_t asn_DEF_fdd_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* primary-CPICH-Info at 3095 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_13 = {
	sizeof(struct LPP_NetworkTime__cellID__uTRA__mode__fdd),
	offsetof(struct LPP_NetworkTime__cellID__uTRA__mode__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_13,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_13 = {
	"fdd",
	"fdd",
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
	asn_DEF_fdd_tags_13,
	sizeof(asn_DEF_fdd_tags_13)
		/sizeof(asn_DEF_fdd_tags_13[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_13,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_13)
		/sizeof(asn_DEF_fdd_tags_13[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_13,
	1,	/* Elements count */
	&asn_SPC_fdd_specs_13	/* Additional specs */
};

static asn_per_constraints_t asn_PER_memb_cellParameters_constr_17 = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_tdd_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime__cellID__uTRA__mode__tdd, cellParameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_cellParameters_constraint_16,
		&asn_PER_memb_cellParameters_constr_17,
		0,
		"cellParameters"
		},
};
static ber_tlv_tag_t asn_DEF_tdd_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cellParameters at 3099 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_16 = {
	sizeof(struct LPP_NetworkTime__cellID__uTRA__mode__tdd),
	offsetof(struct LPP_NetworkTime__cellID__uTRA__mode__tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_16,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_16 = {
	"tdd",
	"tdd",
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
	asn_DEF_tdd_tags_16,
	sizeof(asn_DEF_tdd_tags_16)
		/sizeof(asn_DEF_tdd_tags_16[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_16,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_16)
		/sizeof(asn_DEF_tdd_tags_16[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd_16,
	1,	/* Elements count */
	&asn_SPC_tdd_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mode_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime__cellID__uTRA__mode, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fdd_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime__cellID__uTRA__mode, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tdd_16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_mode_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 3095 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 3099 */
};
static asn_CHOICE_specifics_t asn_SPC_mode_specs_12 = {
	sizeof(struct LPP_NetworkTime__cellID__uTRA__mode),
	offsetof(struct LPP_NetworkTime__cellID__uTRA__mode, _asn_ctx),
	offsetof(struct LPP_NetworkTime__cellID__uTRA__mode, present),
	sizeof(((struct LPP_NetworkTime__cellID__uTRA__mode *)0)->present),
	asn_MAP_mode_tag2el_12,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static asn_per_constraints_t asn_PER_mode_constr_12 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mode_12 = {
	"mode",
	"mode",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_mode_constr_12,
	asn_MBR_mode_12,
	2,	/* Elements count */
	&asn_SPC_mode_specs_12	/* Additional specs */
};

static asn_per_constraints_t asn_PER_memb_mode_constr_12 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_uTRA_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime__cellID__uTRA, mode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mode_12,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_memb_mode_constr_12,
		0,
		"mode"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_NetworkTime__cellID__uTRA, cellGlobalIdUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_CellGlobalIdEUTRA_AndUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellGlobalIdUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime__cellID__uTRA, uarfcn),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_ARFCN_ValueUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uarfcn"
		},
};
static int asn_MAP_uTRA_oms_11[] = { 1 };
static ber_tlv_tag_t asn_DEF_uTRA_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_uTRA_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mode at 3097 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellGlobalIdUTRA at 3103 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* uarfcn at 3104 */
};
static asn_SEQUENCE_specifics_t asn_SPC_uTRA_specs_11 = {
	sizeof(struct LPP_NetworkTime__cellID__uTRA),
	offsetof(struct LPP_NetworkTime__cellID__uTRA, _asn_ctx),
	asn_MAP_uTRA_tag2el_11,
	3,	/* Count of tags in the map */
	asn_MAP_uTRA_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_uTRA_11 = {
	"uTRA",
	"uTRA",
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
	asn_DEF_uTRA_tags_11,
	sizeof(asn_DEF_uTRA_tags_11)
		/sizeof(asn_DEF_uTRA_tags_11[0]) - 1, /* 1 */
	asn_DEF_uTRA_tags_11,	/* Same as above */
	sizeof(asn_DEF_uTRA_tags_11)
		/sizeof(asn_DEF_uTRA_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_uTRA_11,
	3,	/* Elements count */
	&asn_SPC_uTRA_specs_11	/* Additional specs */
};

static asn_per_constraints_t asn_PER_memb_bcchCarrier_constr_23 = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_bsic_constr_24 = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_gSM_22[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime__cellID__gSM, bcchCarrier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bcchCarrier_constraint_22,
		&asn_PER_memb_bcchCarrier_constr_23,
		0,
		"bcchCarrier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime__cellID__gSM, bsic),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bsic_constraint_22,
		&asn_PER_memb_bsic_constr_24,
		0,
		"bsic"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_NetworkTime__cellID__gSM, cellGlobalIdGERAN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_CellGlobalIdGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellGlobalIdGERAN"
		},
};
static int asn_MAP_gSM_oms_22[] = { 2 };
static ber_tlv_tag_t asn_DEF_gSM_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_gSM_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bcchCarrier at 3108 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bsic at 3109 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cellGlobalIdGERAN at 3110 */
};
static asn_SEQUENCE_specifics_t asn_SPC_gSM_specs_22 = {
	sizeof(struct LPP_NetworkTime__cellID__gSM),
	offsetof(struct LPP_NetworkTime__cellID__gSM, _asn_ctx),
	asn_MAP_gSM_tag2el_22,
	3,	/* Count of tags in the map */
	asn_MAP_gSM_oms_22,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gSM_22 = {
	"gSM",
	"gSM",
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
	asn_DEF_gSM_tags_22,
	sizeof(asn_DEF_gSM_tags_22)
		/sizeof(asn_DEF_gSM_tags_22[0]) - 1, /* 1 */
	asn_DEF_gSM_tags_22,	/* Same as above */
	sizeof(asn_DEF_gSM_tags_22)
		/sizeof(asn_DEF_gSM_tags_22[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_gSM_22,
	3,	/* Elements count */
	&asn_SPC_gSM_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellID_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime__cellID, choice.eUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eUTRA_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime__cellID, choice.uTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_uTRA_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime__cellID, choice.gSM),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_gSM_22,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gSM"
		},
};
static asn_TYPE_tag2member_t asn_MAP_cellID_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eUTRA at 3087 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uTRA at 3102 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* gSM at 3108 */
};
static asn_CHOICE_specifics_t asn_SPC_cellID_specs_5 = {
	sizeof(struct LPP_NetworkTime__cellID),
	offsetof(struct LPP_NetworkTime__cellID, _asn_ctx),
	offsetof(struct LPP_NetworkTime__cellID, present),
	sizeof(((struct LPP_NetworkTime__cellID *)0)->present),
	asn_MAP_cellID_tag2el_5,
	3,	/* Count of tags in the map */
	0,
	3	/* Extensions start */
};
static asn_per_constraints_t asn_PER_cellID_constr_5 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellID_5 = {
	"cellID",
	"cellID",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_cellID_constr_5,
	asn_MBR_cellID_5,
	3,	/* Elements count */
	&asn_SPC_cellID_specs_5	/* Additional specs */
};

static asn_per_constraints_t asn_PER_memb_secondsFromFrameStructureStart_constr_2 = {
	{ APC_CONSTRAINED,	 14,  14,  0,  12533 }	/* (0..12533) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_fractionalSecondsFromFrameStructureStart_constr_3 = {
	{ APC_CONSTRAINED,	 22, -1,  0,  3999999 }	/* (0..3999999) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_frameDrift_constr_4 = {
	{ APC_CONSTRAINED,	 7,  7, -64,  63 }	/* (-64..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_cellID_constr_5 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_LPP_NetworkTime_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime, secondsFromFrameStructureStart),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_secondsFromFrameStructureStart_constraint_1,
		&asn_PER_memb_secondsFromFrameStructureStart_constr_2,
		0,
		"secondsFromFrameStructureStart"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime, fractionalSecondsFromFrameStructureStart),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_fractionalSecondsFromFrameStructureStart_constraint_1,
		&asn_PER_memb_fractionalSecondsFromFrameStructureStart_constr_3,
		0,
		"fractionalSecondsFromFrameStructureStart"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_NetworkTime, frameDrift),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_frameDrift_constraint_1,
		&asn_PER_memb_frameDrift_constr_4,
		0,
		"frameDrift"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NetworkTime, cellID),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cellID_5,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_memb_cellID_constr_5,
		0,
		"cellID"
		},
};
static int asn_MAP_LPP_NetworkTime_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_LPP_NetworkTime_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LPP_NetworkTime_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* secondsFromFrameStructureStart at 3082 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* fractionalSecondsFromFrameStructureStart at 3083 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* frameDrift at 3084 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* cellID at 3091 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_NetworkTime_specs_1 = {
	sizeof(struct LPP_NetworkTime),
	offsetof(struct LPP_NetworkTime, _asn_ctx),
	asn_MAP_LPP_NetworkTime_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LPP_NetworkTime_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LPP_NetworkTime = {
	"LPP_NetworkTime",
	"LPP_NetworkTime",
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
	asn_DEF_LPP_NetworkTime_tags_1,
	sizeof(asn_DEF_LPP_NetworkTime_tags_1)
		/sizeof(asn_DEF_LPP_NetworkTime_tags_1[0]), /* 1 */
	asn_DEF_LPP_NetworkTime_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_NetworkTime_tags_1)
		/sizeof(asn_DEF_LPP_NetworkTime_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LPP_NetworkTime_1,
	4,	/* Elements count */
	&asn_SPC_LPP_NetworkTime_specs_1	/* Additional specs */
};
