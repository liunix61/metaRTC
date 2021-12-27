
#ifndef INCLUDE_YANGUTIL_YANGAVTYPE_H265_H_
#define INCLUDE_YANGUTIL_YANGAVTYPE_H265_H_

enum YangHevcNaluType
{
	YANG_NAL_UNIT_CODED_SLICE_TRAIL_N = 0,
	YANG_NAL_UNIT_CODED_SLICE_TRAIL_R, //1
	YANG_NAL_UNIT_CODED_SLICE_TSA_N,   //2
	YANG_NAL_UNIT_CODED_SLICE_TLA,     //3
	YANG_NAL_UNIT_CODED_SLICE_STSA_N,  //4
	YANG_NAL_UNIT_CODED_SLICE_STSA_R,  //5
	YANG_NAL_UNIT_CODED_SLICE_RADL_N,  //6
	YANG_NAL_UNIT_CODED_SLICE_DLP,     //7
	YANG_NAL_UNIT_CODED_SLICE_RASL_N,  //8
	YANG_NAL_UNIT_CODED_SLICE_TFD,     //9
	YANG_NAL_UNIT_RESERVED_10,
	YANG_NAL_UNIT_RESERVED_11,
	YANG_NAL_UNIT_RESERVED_12,
	YANG_NAL_UNIT_RESERVED_13,
	YANG_NAL_UNIT_RESERVED_14,
	YANG_NAL_UNIT_RESERVED_15,
	YANG_NAL_UNIT_CODED_SLICE_BLA,      //16
	YANG_NAL_UNIT_CODED_SLICE_BLANT,    //17
	YANG_NAL_UNIT_CODED_SLICE_BLA_N_LP, //18
	YANG_NAL_UNIT_CODED_SLICE_IDR,      //19
	YANG_NAL_UNIT_CODED_SLICE_IDR_N_LP, //20
	YANG_NAL_UNIT_CODED_SLICE_CRA,      //21
	YANG_NAL_UNIT_VPS=32,                   //32
	YANG_NAL_UNIT_SPS,                   // 33
	YANG_NAL_UNIT_PPS,                   //34
	YANG_NAL_UNIT_ACCESS_UNIT_DELIMITER, //35
	YANG_NAL_UNIT_EOS,                   //36
	YANG_NAL_UNIT_EOB,                   //37
	YANG_NAL_UNIT_FILLER_DATA,           //38
	YANG_NAL_UNIT_SEI ,                  //39Prefix SEI
	YANG_NAL_UNIT_SEI_SUFFIX,            //40Suffix SEI
	YANG_NAL_UNIT_RESERVED_41,
	YANG_NAL_UNIT_RESERVED_42,
	YANG_NAL_UNIT_RESERVED_43,
	YANG_NAL_UNIT_RESERVED_44,
	YANG_NAL_UNIT_RESERVED_45,
	YANG_NAL_UNIT_RESERVED_46,
	YANG_NAL_UNIT_RESERVED_47,
	YANG_NAL_UNIT_UNSPECIFIED_48,
	YANG_NAL_UNIT_UNSPECIFIED_49,
	YANG_NAL_UNIT_UNSPECIFIED_50,
	YANG_NAL_UNIT_UNSPECIFIED_51,
	YANG_NAL_UNIT_UNSPECIFIED_52,
	YANG_NAL_UNIT_UNSPECIFIED_53,
	YANG_NAL_UNIT_UNSPECIFIED_54,
	YANG_NAL_UNIT_UNSPECIFIED_55,
	YANG_NAL_UNIT_UNSPECIFIED_56,
	YANG_NAL_UNIT_UNSPECIFIED_57,
	YANG_NAL_UNIT_UNSPECIFIED_58,
	YANG_NAL_UNIT_UNSPECIFIED_59,
	YANG_NAL_UNIT_UNSPECIFIED_60,
	YANG_NAL_UNIT_UNSPECIFIED_61,
	YANG_NAL_UNIT_UNSPECIFIED_62,
	YANG_NAL_UNIT_UNSPECIFIED_63,
	YANG_NAL_UNIT_INVALID,
};

//for nalu data first byte
#define YANG_HEVC_NALU_TYPE(code) (enum YangHevcNaluType)((code & 0x7E)>>1)
#define H265_kFuA 49
#define H265_kStapA 48


#endif /* INCLUDE_YANGUTIL_YANGAVTYPE_H265_H_ */
