/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t BPFMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
    SmallVectorImpl<MCFixup> &Fixups,
    const MCSubtargetInfo &STI) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(504403158265495552),	// ADD_ri
    UINT64_C(288230376151711744),	// ADD_ri_32
    UINT64_C(1080863910568919040),	// ADD_rr
    UINT64_C(864691128455135232),	// ADD_rr_32
    UINT64_C(6269010681299730432),	// AND_ri
    UINT64_C(6052837899185946624),	// AND_ri_32
    UINT64_C(6845471433603153920),	// AND_rr
    UINT64_C(6629298651489370112),	// AND_rr_32
    UINT64_C(15852670688344145936),	// BE16
    UINT64_C(15852670688344145952),	// BE32
    UINT64_C(15852670688344145984),	// BE64
    UINT64_C(15780613094306218225),	// CMPXCHGD
    UINT64_C(14051230837395947761),	// CMPXCHGW32
    UINT64_C(6917529027641081856),	// CORE_ALU32_MEM
    UINT64_C(6917529027641081856),	// CORE_MEM
    UINT64_C(7998392938210000896),	// CORE_SHIFT
    UINT64_C(3963167672086036480),	// DIV_ri
    UINT64_C(3746994889972252672),	// DIV_ri_32
    UINT64_C(4539628424389459968),	// DIV_rr
    UINT64_C(4323455642275676160),	// DIV_rr_32
    UINT64_C(9583660007044415488),	// JAL
    UINT64_C(10160120759347838976),	// JALX
    UINT64_C(1513209474796486656),	// JEQ_ri
    UINT64_C(1585267068834414592),	// JEQ_ri_32
    UINT64_C(2089670227099910144),	// JEQ_rr
    UINT64_C(2161727821137838080),	// JEQ_rr_32
    UINT64_C(360287970189639680),	// JMP
    UINT64_C(6124895493223874560),	// JNE_ri
    UINT64_C(6196953087261802496),	// JNE_ri_32
    UINT64_C(6701356245527298048),	// JNE_rr
    UINT64_C(6773413839565225984),	// JNE_rr_32
    UINT64_C(8430738502437568512),	// JSGE_ri
    UINT64_C(8502796096475496448),	// JSGE_ri_32
    UINT64_C(9007199254740992000),	// JSGE_rr
    UINT64_C(9079256848778919936),	// JSGE_rr_32
    UINT64_C(7277816997830721536),	// JSGT_ri
    UINT64_C(7349874591868649472),	// JSGT_ri_32
    UINT64_C(7854277750134145024),	// JSGT_rr
    UINT64_C(7926335344172072960),	// JSGT_rr_32
    UINT64_C(15348267530078650368),	// JSLE_ri
    UINT64_C(15420325124116578304),	// JSLE_ri_32
    UINT64_C(15924728282382073856),	// JSLE_rr
    UINT64_C(15996785876420001792),	// JSLE_rr_32
    UINT64_C(14195346025471803392),	// JSLT_ri
    UINT64_C(14267403619509731328),	// JSLT_ri_32
    UINT64_C(14771806777775226880),	// JSLT_rr
    UINT64_C(14843864371813154816),	// JSLT_rr_32
    UINT64_C(3819052484010180608),	// JUGE_ri
    UINT64_C(3891110078048108544),	// JUGE_ri_32
    UINT64_C(4395513236313604096),	// JUGE_rr
    UINT64_C(4467570830351532032),	// JUGE_rr_32
    UINT64_C(2666130979403333632),	// JUGT_ri
    UINT64_C(2738188573441261568),	// JUGT_ri_32
    UINT64_C(3242591731706757120),	// JUGT_rr
    UINT64_C(3314649325744685056),	// JUGT_rr_32
    UINT64_C(13042424520864956416),	// JULE_ri
    UINT64_C(13114482114902884352),	// JULE_ri_32
    UINT64_C(13618885273168379904),	// JULE_rr
    UINT64_C(13690942867206307840),	// JULE_rr_32
    UINT64_C(11889503016258109440),	// JULT_ri
    UINT64_C(11961560610296037376),	// JULT_ri_32
    UINT64_C(12465963768561532928),	// JULT_rr
    UINT64_C(12538021362599460864),	// JULT_rr_32
    UINT64_C(8142508126285856768),	// LDB
    UINT64_C(8142508126285856768),	// LDB32
    UINT64_C(8718968878589280256),	// LDD
    UINT64_C(7566047373982433280),	// LDH
    UINT64_C(7566047373982433280),	// LDH32
    UINT64_C(6989586621679009792),	// LDW
    UINT64_C(6989586621679009792),	// LDW32
    UINT64_C(3458764513820540928),	// LD_ABS_B
    UINT64_C(2882303761517117440),	// LD_ABS_H
    UINT64_C(2305843009213693952),	// LD_ABS_W
    UINT64_C(5764607523034234880),	// LD_IND_B
    UINT64_C(5188146770730811392),	// LD_IND_H
    UINT64_C(4611686018427387904),	// LD_IND_W
    UINT64_C(1729382256910270464),	// LD_imm64
    UINT64_C(1729382256910270464),	// LD_pseudo
    UINT64_C(15276209936040722448),	// LE16
    UINT64_C(15276209936040722464),	// LE32
    UINT64_C(15276209936040722496),	// LE64
    UINT64_C(10880696699727118336),	// MOD_ri
    UINT64_C(10664523917613334528),	// MOD_ri_32
    UINT64_C(11457157452030541824),	// MOD_rr
    UINT64_C(11240984669916758016),	// MOD_rr_32
    UINT64_C(13546827679130451968),	// MOV_32_64
    UINT64_C(13186539708940812288),	// MOV_ri
    UINT64_C(12970366926827028480),	// MOV_ri_32
    UINT64_C(13763000461244235776),	// MOV_rr
    UINT64_C(13546827679130451968),	// MOV_rr_32
    UINT64_C(2810246167479189504),	// MUL_ri
    UINT64_C(2594073385365405696),	// MUL_ri_32
    UINT64_C(3386706919782612992),	// MUL_rr
    UINT64_C(3170534137668829184),	// MUL_rr_32
    UINT64_C(9511602413006487552),	// NEG_32
    UINT64_C(9727775195120271360),	// NEG_64
    UINT64_C(13763000461244235776),	// NOP
    UINT64_C(5116089176692883456),	// OR_ri
    UINT64_C(4899916394579099648),	// OR_ri_32
    UINT64_C(5692549928996306944),	// OR_rr
    UINT64_C(5476377146882523136),	// OR_rr_32
    UINT64_C(10736581511651262464),	// RET
    UINT64_C(7421932185906577408),	// SLL_ri
    UINT64_C(7205759403792793600),	// SLL_ri_32
    UINT64_C(7998392938210000896),	// SLL_rr
    UINT64_C(7782220156096217088),	// SLL_rr_32
    UINT64_C(14339461213547659264),	// SRA_ri
    UINT64_C(14123288431433875456),	// SRA_ri_32
    UINT64_C(14915921965851082752),	// SRA_rr
    UINT64_C(14699749183737298944),	// SRA_rr_32
    UINT64_C(8574853690513424384),	// SRL_ri
    UINT64_C(8358680908399640576),	// SRL_ri_32
    UINT64_C(9151314442816847872),	// SRL_rr
    UINT64_C(8935141660703064064),	// SRL_rr_32
    UINT64_C(8286623314361712640),	// STB
    UINT64_C(8286623314361712640),	// STB32
    UINT64_C(8863084066665136128),	// STD
    UINT64_C(7710162562058289152),	// STH
    UINT64_C(7710162562058289152),	// STH32
    UINT64_C(7133701809754865664),	// STW
    UINT64_C(7133701809754865664),	// STW32
    UINT64_C(1657324662872342528),	// SUB_ri
    UINT64_C(1441151880758558720),	// SUB_ri_32
    UINT64_C(2233785415175766016),	// SUB_rr
    UINT64_C(2017612633061982208),	// SUB_rr_32
    UINT64_C(15780613094306217984),	// XADDD
    UINT64_C(14051230837395947520),	// XADDW
    UINT64_C(14051230837395947520),	// XADDW32
    UINT64_C(15780613094306218064),	// XANDD
    UINT64_C(14051230837395947600),	// XANDW32
    UINT64_C(15780613094306218209),	// XCHGD
    UINT64_C(14051230837395947745),	// XCHGW32
    UINT64_C(15780613094306217985),	// XFADDD
    UINT64_C(14051230837395947521),	// XFADDW32
    UINT64_C(15780613094306218065),	// XFANDD
    UINT64_C(14051230837395947601),	// XFANDW32
    UINT64_C(15780613094306218049),	// XFORD
    UINT64_C(14051230837395947585),	// XFORW32
    UINT64_C(15780613094306218145),	// XFXORD
    UINT64_C(14051230837395947681),	// XFXORW32
    UINT64_C(15780613094306218048),	// XORD
    UINT64_C(14051230837395947584),	// XORW32
    UINT64_C(12033618204333965312),	// XOR_ri
    UINT64_C(11817445422220181504),	// XOR_ri_32
    UINT64_C(12610078956637388800),	// XOR_rr
    UINT64_C(12393906174523604992),	// XOR_rr_32
    UINT64_C(15780613094306218144),	// XXORD
    UINT64_C(14051230837395947680),	// XXORW32
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case BPF::CORE_ALU32_MEM:
    case BPF::CORE_MEM:
    case BPF::NOP:
    case BPF::RET: {
      break;
    }
    case BPF::JAL:
    case BPF::JALX: {
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      break;
    }
    case BPF::JMP: {
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(65535);
      op <<= 32;
      Value |= op;
      break;
    }
    case BPF::BE16:
    case BPF::BE32:
    case BPF::BE64:
    case BPF::LE16:
    case BPF::LE32:
    case BPF::LE64:
    case BPF::NEG_32:
    case BPF::NEG_64: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      break;
    }
    case BPF::JEQ_ri:
    case BPF::JEQ_ri_32:
    case BPF::JNE_ri:
    case BPF::JNE_ri_32:
    case BPF::JSGE_ri:
    case BPF::JSGE_ri_32:
    case BPF::JSGT_ri:
    case BPF::JSGT_ri_32:
    case BPF::JSLE_ri:
    case BPF::JSLE_ri_32:
    case BPF::JSLT_ri:
    case BPF::JSLT_ri_32:
    case BPF::JUGE_ri:
    case BPF::JUGE_ri_32:
    case BPF::JUGT_ri:
    case BPF::JUGT_ri_32:
    case BPF::JULE_ri:
    case BPF::JULE_ri_32:
    case BPF::JULT_ri:
    case BPF::JULT_ri_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(65535);
      op <<= 32;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      break;
    }
    case BPF::LDB:
    case BPF::LDB32:
    case BPF::LDD:
    case BPF::LDH:
    case BPF::LDH32:
    case BPF::LDW:
    case BPF::LDW32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(983040)) << 36;
      Value |= (op & UINT64_C(65535)) << 32;
      break;
    }
    case BPF::LD_imm64:
    case BPF::MOV_ri:
    case BPF::MOV_ri_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      break;
    }
    case BPF::ADD_ri:
    case BPF::ADD_ri_32:
    case BPF::AND_ri:
    case BPF::AND_ri_32:
    case BPF::DIV_ri:
    case BPF::DIV_ri_32:
    case BPF::MOD_ri:
    case BPF::MOD_ri_32:
    case BPF::MUL_ri:
    case BPF::MUL_ri_32:
    case BPF::OR_ri:
    case BPF::OR_ri_32:
    case BPF::SLL_ri:
    case BPF::SLL_ri_32:
    case BPF::SRA_ri:
    case BPF::SRA_ri_32:
    case BPF::SRL_ri:
    case BPF::SRL_ri_32:
    case BPF::SUB_ri:
    case BPF::SUB_ri_32:
    case BPF::XOR_ri:
    case BPF::XOR_ri_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      break;
    }
    case BPF::LD_pseudo: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      // op: pseudo
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      break;
    }
    case BPF::MOV_32_64:
    case BPF::MOV_rr:
    case BPF::MOV_rr_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      break;
    }
    case BPF::JEQ_rr:
    case BPF::JEQ_rr_32:
    case BPF::JNE_rr:
    case BPF::JNE_rr_32:
    case BPF::JSGE_rr:
    case BPF::JSGE_rr_32:
    case BPF::JSGT_rr:
    case BPF::JSGT_rr_32:
    case BPF::JSLE_rr:
    case BPF::JSLE_rr_32:
    case BPF::JSLT_rr:
    case BPF::JSLT_rr_32:
    case BPF::JUGE_rr:
    case BPF::JUGE_rr_32:
    case BPF::JUGT_rr:
    case BPF::JUGT_rr_32:
    case BPF::JULE_rr:
    case BPF::JULE_rr_32:
    case BPF::JULT_rr:
    case BPF::JULT_rr_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(65535);
      op <<= 32;
      Value |= op;
      break;
    }
    case BPF::ADD_rr:
    case BPF::ADD_rr_32:
    case BPF::AND_rr:
    case BPF::AND_rr_32:
    case BPF::CORE_SHIFT:
    case BPF::DIV_rr:
    case BPF::DIV_rr_32:
    case BPF::MOD_rr:
    case BPF::MOD_rr_32:
    case BPF::MUL_rr:
    case BPF::MUL_rr_32:
    case BPF::OR_rr:
    case BPF::OR_rr_32:
    case BPF::SLL_rr:
    case BPF::SLL_rr_32:
    case BPF::SRA_rr:
    case BPF::SRA_rr_32:
    case BPF::SRL_rr:
    case BPF::SRL_rr_32:
    case BPF::SUB_rr:
    case BPF::SUB_rr_32:
    case BPF::XOR_rr:
    case BPF::XOR_rr_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 48;
      Value |= op;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      break;
    }
    case BPF::XADDD:
    case BPF::XADDW:
    case BPF::XADDW32:
    case BPF::XANDD:
    case BPF::XANDW32:
    case BPF::XCHGD:
    case BPF::XCHGW32:
    case BPF::XFADDD:
    case BPF::XFADDW32:
    case BPF::XFANDD:
    case BPF::XFANDW32:
    case BPF::XFORD:
    case BPF::XFORW32:
    case BPF::XFXORD:
    case BPF::XFXORW32:
    case BPF::XORD:
    case BPF::XORW32:
    case BPF::XXORD:
    case BPF::XXORW32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1048575);
      op <<= 32;
      Value |= op;
      break;
    }
    case BPF::LD_ABS_B:
    case BPF::LD_ABS_H:
    case BPF::LD_ABS_W: {
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(4294967295);
      Value |= op;
      break;
    }
    case BPF::CMPXCHGD:
    case BPF::CMPXCHGW32: {
      // op: new
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      // op: addr
      op = getMemoryOpValue(MI, 0, Fixups, STI);
      op &= UINT64_C(1048575);
      op <<= 32;
      Value |= op;
      break;
    }
    case BPF::STB:
    case BPF::STB32:
    case BPF::STD:
    case BPF::STH:
    case BPF::STH32:
    case BPF::STW:
    case BPF::STW32: {
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      op &= UINT64_C(1048575);
      op <<= 32;
      Value |= op;
      break;
    }
    case BPF::LD_IND_B:
    case BPF::LD_IND_H:
    case BPF::LD_IND_W: {
      // op: val
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      op &= UINT64_C(15);
      op <<= 52;
      Value |= op;
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str().c_str());
  }
  return Value;
}
