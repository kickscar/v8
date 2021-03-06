// Copyright 2015 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_COMPILER_BACKEND_S390_INSTRUCTION_CODES_S390_H_
#define V8_COMPILER_BACKEND_S390_INSTRUCTION_CODES_S390_H_

namespace v8 {
namespace internal {
namespace compiler {

// S390-specific opcodes that specify which assembly sequence to emit.
// Most opcodes specify a single instruction.
#define TARGET_ARCH_OPCODE_LIST(V)          \
  V(S390_Peek)                              \
  V(S390_Abs32)                             \
  V(S390_Abs64)                             \
  V(S390_And32)                             \
  V(S390_And64)                             \
  V(S390_Or32)                              \
  V(S390_Or64)                              \
  V(S390_Xor32)                             \
  V(S390_Xor64)                             \
  V(S390_ShiftLeft32)                       \
  V(S390_ShiftLeft64)                       \
  V(S390_ShiftLeftPair)                     \
  V(S390_ShiftRight32)                      \
  V(S390_ShiftRight64)                      \
  V(S390_ShiftRightPair)                    \
  V(S390_ShiftRightArith32)                 \
  V(S390_ShiftRightArith64)                 \
  V(S390_ShiftRightArithPair)               \
  V(S390_RotRight32)                        \
  V(S390_RotRight64)                        \
  V(S390_Not32)                             \
  V(S390_Not64)                             \
  V(S390_RotLeftAndClear64)                 \
  V(S390_RotLeftAndClearLeft64)             \
  V(S390_RotLeftAndClearRight64)            \
  V(S390_Lay)                               \
  V(S390_Add32)                             \
  V(S390_Add64)                             \
  V(S390_AddPair)                           \
  V(S390_AddFloat)                          \
  V(S390_AddDouble)                         \
  V(S390_Sub32)                             \
  V(S390_Sub64)                             \
  V(S390_SubFloat)                          \
  V(S390_SubDouble)                         \
  V(S390_SubPair)                           \
  V(S390_MulPair)                           \
  V(S390_Mul32)                             \
  V(S390_Mul32WithOverflow)                 \
  V(S390_Mul64)                             \
  V(S390_MulHigh32)                         \
  V(S390_MulHighU32)                        \
  V(S390_MulFloat)                          \
  V(S390_MulDouble)                         \
  V(S390_Div32)                             \
  V(S390_Div64)                             \
  V(S390_DivU32)                            \
  V(S390_DivU64)                            \
  V(S390_DivFloat)                          \
  V(S390_DivDouble)                         \
  V(S390_Mod32)                             \
  V(S390_Mod64)                             \
  V(S390_ModU32)                            \
  V(S390_ModU64)                            \
  V(S390_ModDouble)                         \
  V(S390_Neg32)                             \
  V(S390_Neg64)                             \
  V(S390_NegDouble)                         \
  V(S390_NegFloat)                          \
  V(S390_SqrtFloat)                         \
  V(S390_FloorFloat)                        \
  V(S390_CeilFloat)                         \
  V(S390_TruncateFloat)                     \
  V(S390_AbsFloat)                          \
  V(S390_SqrtDouble)                        \
  V(S390_FloorDouble)                       \
  V(S390_CeilDouble)                        \
  V(S390_TruncateDouble)                    \
  V(S390_RoundDouble)                       \
  V(S390_MaxFloat)                          \
  V(S390_MaxDouble)                         \
  V(S390_MinFloat)                          \
  V(S390_MinDouble)                         \
  V(S390_AbsDouble)                         \
  V(S390_Cntlz32)                           \
  V(S390_Cntlz64)                           \
  V(S390_Popcnt32)                          \
  V(S390_Popcnt64)                          \
  V(S390_Cmp32)                             \
  V(S390_Cmp64)                             \
  V(S390_CmpFloat)                          \
  V(S390_CmpDouble)                         \
  V(S390_Tst32)                             \
  V(S390_Tst64)                             \
  V(S390_Push)                              \
  V(S390_PushFrame)                         \
  V(S390_StackClaim)                        \
  V(S390_StoreToStackSlot)                  \
  V(S390_SignExtendWord8ToInt32)            \
  V(S390_SignExtendWord16ToInt32)           \
  V(S390_SignExtendWord8ToInt64)            \
  V(S390_SignExtendWord16ToInt64)           \
  V(S390_SignExtendWord32ToInt64)           \
  V(S390_Uint32ToUint64)                    \
  V(S390_Int64ToInt32)                      \
  V(S390_Int64ToFloat32)                    \
  V(S390_Int64ToDouble)                     \
  V(S390_Uint64ToFloat32)                   \
  V(S390_Uint64ToDouble)                    \
  V(S390_Int32ToFloat32)                    \
  V(S390_Int32ToDouble)                     \
  V(S390_Uint32ToFloat32)                   \
  V(S390_Uint32ToDouble)                    \
  V(S390_Float32ToInt64)                    \
  V(S390_Float32ToUint64)                   \
  V(S390_Float32ToInt32)                    \
  V(S390_Float32ToUint32)                   \
  V(S390_Float32ToDouble)                   \
  V(S390_Float64SilenceNaN)                 \
  V(S390_DoubleToInt32)                     \
  V(S390_DoubleToUint32)                    \
  V(S390_DoubleToInt64)                     \
  V(S390_DoubleToUint64)                    \
  V(S390_DoubleToFloat32)                   \
  V(S390_DoubleExtractLowWord32)            \
  V(S390_DoubleExtractHighWord32)           \
  V(S390_DoubleInsertLowWord32)             \
  V(S390_DoubleInsertHighWord32)            \
  V(S390_DoubleConstruct)                   \
  V(S390_BitcastInt32ToFloat32)             \
  V(S390_BitcastFloat32ToInt32)             \
  V(S390_BitcastInt64ToDouble)              \
  V(S390_BitcastDoubleToInt64)              \
  V(S390_LoadWordS8)                        \
  V(S390_LoadWordU8)                        \
  V(S390_LoadWordS16)                       \
  V(S390_LoadWordU16)                       \
  V(S390_LoadWordS32)                       \
  V(S390_LoadWordU32)                       \
  V(S390_LoadAndTestWord32)                 \
  V(S390_LoadAndTestWord64)                 \
  V(S390_LoadAndTestFloat32)                \
  V(S390_LoadAndTestFloat64)                \
  V(S390_LoadReverse16RR)                   \
  V(S390_LoadReverse32RR)                   \
  V(S390_LoadReverse64RR)                   \
  V(S390_LoadReverseSimd128RR)              \
  V(S390_LoadReverseSimd128)                \
  V(S390_LoadReverse16)                     \
  V(S390_LoadReverse32)                     \
  V(S390_LoadReverse64)                     \
  V(S390_LoadWord64)                        \
  V(S390_LoadFloat32)                       \
  V(S390_LoadDouble)                        \
  V(S390_StoreWord8)                        \
  V(S390_StoreWord16)                       \
  V(S390_StoreWord32)                       \
  V(S390_StoreWord64)                       \
  V(S390_StoreReverse16)                    \
  V(S390_StoreReverse32)                    \
  V(S390_StoreReverse64)                    \
  V(S390_StoreReverseSimd128)               \
  V(S390_StoreFloat32)                      \
  V(S390_StoreDouble)                       \
  V(S390_CompressSigned)                    \
  V(S390_CompressPointer)                   \
  V(S390_CompressAny)                       \
  V(S390_Word64AtomicExchangeUint8)         \
  V(S390_Word64AtomicExchangeUint16)        \
  V(S390_Word64AtomicExchangeUint32)        \
  V(S390_Word64AtomicExchangeUint64)        \
  V(S390_Word64AtomicCompareExchangeUint8)  \
  V(S390_Word64AtomicCompareExchangeUint16) \
  V(S390_Word64AtomicCompareExchangeUint32) \
  V(S390_Word64AtomicCompareExchangeUint64) \
  V(S390_Word64AtomicAddUint8)              \
  V(S390_Word64AtomicAddUint16)             \
  V(S390_Word64AtomicAddUint32)             \
  V(S390_Word64AtomicAddUint64)             \
  V(S390_Word64AtomicSubUint8)              \
  V(S390_Word64AtomicSubUint16)             \
  V(S390_Word64AtomicSubUint32)             \
  V(S390_Word64AtomicSubUint64)             \
  V(S390_Word64AtomicAndUint8)              \
  V(S390_Word64AtomicAndUint16)             \
  V(S390_Word64AtomicAndUint32)             \
  V(S390_Word64AtomicAndUint64)             \
  V(S390_Word64AtomicOrUint8)               \
  V(S390_Word64AtomicOrUint16)              \
  V(S390_Word64AtomicOrUint32)              \
  V(S390_Word64AtomicOrUint64)              \
  V(S390_Word64AtomicXorUint8)              \
  V(S390_Word64AtomicXorUint16)             \
  V(S390_Word64AtomicXorUint32)             \
  V(S390_Word64AtomicXorUint64)             \
  V(S390_F32x4Splat)                        \
  V(S390_F32x4ExtractLane)                  \
  V(S390_F32x4ReplaceLane)                  \
  V(S390_F32x4Add)                          \
  V(S390_F32x4AddHoriz)                     \
  V(S390_F32x4Sub)                          \
  V(S390_F32x4Mul)                          \
  V(S390_F32x4Eq)                           \
  V(S390_F32x4Ne)                           \
  V(S390_F32x4Lt)                           \
  V(S390_F32x4Le)                           \
  V(S390_F32x4Abs)                          \
  V(S390_F32x4Neg)                          \
  V(S390_F32x4RecipApprox)                  \
  V(S390_F32x4RecipSqrtApprox)              \
  V(S390_F32x4SConvertI32x4)                \
  V(S390_F32x4UConvertI32x4)                \
  V(S390_I32x4Splat)                        \
  V(S390_I32x4ExtractLane)                  \
  V(S390_I32x4ReplaceLane)                  \
  V(S390_I32x4Add)                          \
  V(S390_I32x4AddHoriz)                     \
  V(S390_I32x4Sub)                          \
  V(S390_I32x4Mul)                          \
  V(S390_I32x4MinS)                         \
  V(S390_I32x4MinU)                         \
  V(S390_I32x4MaxS)                         \
  V(S390_I32x4MaxU)                         \
  V(S390_I32x4Eq)                           \
  V(S390_I32x4Ne)                           \
  V(S390_I32x4GtS)                          \
  V(S390_I32x4GeS)                          \
  V(S390_I32x4GtU)                          \
  V(S390_I32x4GeU)                          \
  V(S390_I32x4Neg)                          \
  V(S390_I32x4Shl)                          \
  V(S390_I32x4ShrS)                         \
  V(S390_I32x4ShrU)                         \
  V(S390_I32x4SConvertF32x4)                \
  V(S390_I32x4UConvertF32x4)                \
  V(S390_I32x4SConvertI16x8Low)             \
  V(S390_I32x4SConvertI16x8High)            \
  V(S390_I32x4UConvertI16x8Low)             \
  V(S390_I32x4UConvertI16x8High)            \
  V(S390_I16x8Splat)                        \
  V(S390_I16x8ExtractLaneU)                 \
  V(S390_I16x8ExtractLaneS)                 \
  V(S390_I16x8ReplaceLane)                  \
  V(S390_I16x8Add)                          \
  V(S390_I16x8AddHoriz)                     \
  V(S390_I16x8Sub)                          \
  V(S390_I16x8Mul)                          \
  V(S390_I16x8MinS)                         \
  V(S390_I16x8MinU)                         \
  V(S390_I16x8MaxS)                         \
  V(S390_I16x8MaxU)                         \
  V(S390_I16x8Eq)                           \
  V(S390_I16x8Ne)                           \
  V(S390_I16x8GtS)                          \
  V(S390_I16x8GeS)                          \
  V(S390_I16x8GtU)                          \
  V(S390_I16x8GeU)                          \
  V(S390_I16x8Shl)                          \
  V(S390_I16x8ShrS)                         \
  V(S390_I16x8ShrU)                         \
  V(S390_I16x8Neg)                          \
  V(S390_I16x8SConvertI32x4)                \
  V(S390_I16x8UConvertI32x4)                \
  V(S390_I16x8SConvertI8x16Low)             \
  V(S390_I16x8SConvertI8x16High)            \
  V(S390_I16x8UConvertI8x16Low)             \
  V(S390_I16x8UConvertI8x16High)            \
  V(S390_I16x8AddSaturateS)                 \
  V(S390_I16x8SubSaturateS)                 \
  V(S390_I16x8AddSaturateU)                 \
  V(S390_I16x8SubSaturateU)                 \
  V(S390_I8x16Splat)                        \
  V(S390_I8x16ExtractLaneU)                 \
  V(S390_I8x16ExtractLaneS)                 \
  V(S390_I8x16ReplaceLane)                  \
  V(S390_I8x16Add)                          \
  V(S390_I8x16Sub)                          \
  V(S390_I8x16Mul)                          \
  V(S390_I8x16MinS)                         \
  V(S390_I8x16MinU)                         \
  V(S390_I8x16MaxS)                         \
  V(S390_I8x16MaxU)                         \
  V(S390_I8x16Eq)                           \
  V(S390_I8x16Ne)                           \
  V(S390_I8x16GtS)                          \
  V(S390_I8x16GeS)                          \
  V(S390_I8x16GtU)                          \
  V(S390_I8x16GeU)                          \
  V(S390_I8x16Shl)                          \
  V(S390_I8x16ShrS)                         \
  V(S390_I8x16ShrU)                         \
  V(S390_I8x16Neg)                          \
  V(S390_I8x16SConvertI16x8)                \
  V(S390_I8x16UConvertI16x8)                \
  V(S390_I8x16AddSaturateS)                 \
  V(S390_I8x16SubSaturateS)                 \
  V(S390_I8x16AddSaturateU)                 \
  V(S390_I8x16SubSaturateU)                 \
  V(S390_S1x4AnyTrue)                       \
  V(S390_S1x8AnyTrue)                       \
  V(S390_S1x16AnyTrue)                      \
  V(S390_S1x4AllTrue)                       \
  V(S390_S1x8AllTrue)                       \
  V(S390_S1x16AllTrue)                      \
  V(S390_S128And)                           \
  V(S390_S128Or)                            \
  V(S390_S128Xor)                           \
  V(S390_S128Zero)                          \
  V(S390_S128Not)                           \
  V(S390_S128Select)                        \
  V(S390_StoreSimd128)                      \
  V(S390_LoadSimd128)

// Addressing modes represent the "shape" of inputs to an instruction.
// Many instructions support multiple addressing modes. Addressing modes
// are encoded into the InstructionCode of the instruction and tell the
// code generator after register allocation which assembler method to call.
//
// We use the following local notation for addressing modes:
//
// R = register
// O = register or stack slot
// D = double register
// I = immediate (handle, external, int32)
// MRI = [register + immediate]
// MRR = [register + register]
#define TARGET_ADDRESSING_MODE_LIST(V) \
  V(MR)   /* [%r0          ] */        \
  V(MRI)  /* [%r0       + K] */        \
  V(MRR)  /* [%r0 + %r1    ] */        \
  V(MRRI) /* [%r0 + %r1 + K] */

}  // namespace compiler
}  // namespace internal
}  // namespace v8

#endif  // V8_COMPILER_BACKEND_S390_INSTRUCTION_CODES_S390_H_
