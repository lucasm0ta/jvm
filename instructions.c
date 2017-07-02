#include "instructions.h"

void createInstructionsArray()
{
    instruction[0] = nop;
	instruction[1] = aconst_null;
	instruction[2] = iconst_m1;
	instruction[3] = iconst_0;
	instruction[4] = iconst_1;
	instruction[5] = iconst_2;
	instruction[6] = iconst_3;
	instruction[7] = iconst_4;
	instruction[8] = iconst_5;
	instruction[9] = lconst_0;
	instruction[10] = lconst_1;
	instruction[11] = fconst_0;
	instruction[12] = fconst_1;
	instruction[13] = fconst_2;
	instruction[14] = dconst_0;
	instruction[15] = dconst_1;
	instruction[16] = bipush;
	instruction[17] = sipush;
	instruction[18] = ldc;
	instruction[19] = ldc_w;
	instruction[20] = ldc2_w;
	instruction[21] = iload;
	instruction[22] = lload;
	instruction[23] = fload;
	instruction[24] = dload;
	instruction[25] = aload;
	instruction[26] = iload_0;
	instruction[27] = iload_1;
	instruction[28] = iload_2;
	instruction[29] = iload_3;
	instruction[30] = lload_0;
	instruction[31] = lload_1;
	instruction[32] = lload_2;
	instruction[33] = lload_3;
	instruction[34] = fload_0;
	instruction[35] = fload_1;
	instruction[36] = fload_2;
	instruction[37] = fload_3;
	instruction[38] = dload_0;
	instruction[39] = dload_1;
	instruction[40] = dload_2;
	instruction[41] = dload_3;
	instruction[42] = aload_0;
	instruction[43] = aload_1;
	instruction[44] = aload_2;
	instruction[45] = aload_3;
	instruction[46] = iaload;
	instruction[47] = laload;
	instruction[48] = faload;
	instruction[49] = daload;
	instruction[50] = aaload;
	instruction[51] = baload;
	instruction[52] = caload;
	instruction[53] = saload;
	instruction[54] = istore;
	instruction[55] = lstore;
	instruction[56] = fstore;
	instruction[57] = dstore;
	instruction[58] = astore;
	instruction[59] = istore_0;
	instruction[60] = istore_1;
	instruction[61] = istore_2;
	instruction[62] = istore_3;
	instruction[63] = lstore_0;
	instruction[64] = lstore_1;
	instruction[65] = lstore_2;
	instruction[66] = lstore_3;
	instruction[67] = fstore_0;
	instruction[68] = fstore_1;
	instruction[69] = fstore_2;
	instruction[70] = fstore_3;
	instruction[71] = dstore_0;
	instruction[72] = dstore_1;
	instruction[73] = dstore_2;
	instruction[74] = dstore_3;
	instruction[75] = astore_0;
	instruction[76] = astore_1;
	instruction[77] = astore_2;
	instruction[78] = astore_3;
	instruction[79] = iastore;
	instruction[80] = lastore;
	instruction[81] = fastore;
	instruction[82] = dastore;
	instruction[83] = aastore;
	instruction[84] = bastore;
	instruction[85] = castore;
	instruction[86] = sastore;
	instruction[87] = pop;
	instruction[88] = pop2;
	instruction[89] = dup;
	instruction[90] = dup_x1;
	instruction[91] = dup_x2;
	instruction[92] = dup2;
	instruction[93] = dup2_x1;
	instruction[94] = dup2_x2;
	instruction[95] = swap;
	instruction[96] = iadd;
	instruction[97] = ladd;
	instruction[98] = fadd;
	instruction[99] = dadd;
	instruction[100] = isub;
	instruction[101] = lsub;
	instruction[102] = fsub;
	instruction[103] = dsub;
	instruction[104] = imul;
	instruction[105] = lmul;
	instruction[106] = fmul;
	instruction[107] = dmul;
	instruction[108] = idiv;
	instruction[109] = ins_ldiv;
	instruction[110] = fdiv;
	instruction[111] = ddiv;
	instruction[112] = irem;
	instruction[113] = lrem;
	instruction[114] = frem;
	instruction[115] = _drem;
	instruction[116] = ineg;
	instruction[117] = lneg;
	instruction[118] = fneg;
	instruction[119] = dneg;
	instruction[120] = ishl;
	instruction[121] = lshl;
	instruction[122] = ishr;
	instruction[123] = lshr;
	instruction[124] = iushr;
	instruction[125] = lushr;
	instruction[126] = iand;
	instruction[127] = land;
	instruction[128] = ior;
	instruction[129] = lor;
	instruction[130] = ixor;
	instruction[131] = lxor;
	instruction[132] = iinc;
	instruction[133] = i2l;
	instruction[134] = i2f;
	instruction[135] = i2d;
	instruction[136] = l2i;
	instruction[137] = l2f;
	instruction[138] = l2d;
	instruction[139] = f2i;
	instruction[140] = f2l;
	instruction[141] = f2d;
	instruction[142] = d2i;
	instruction[143] = d2l;
	instruction[144] = d2f;
	instruction[145] = i2b;
	instruction[146] = i2c;
	instruction[147] = i2s;
	instruction[148] = lcmp;
	instruction[149] = fcmpl;
	instruction[150] = fcmpg;
	instruction[151] = dcmpl;
	instruction[152] = dcmpg;
	instruction[153] = ifeq;
	instruction[154] = ifne;
	instruction[155] = iflt;
	instruction[156] = ifge;
	instruction[157] = ifgt;
	instruction[158] = ifle;
	instruction[159] = if_icmpeq;
	instruction[160] = if_icmpne;
	instruction[161] = if_icmplt;
	instruction[162] = if_icmpge;
	instruction[163] = if_icmpgt;
	instruction[164] = if_icmple;
	instruction[165] = if_acmpeq;
	instruction[166] = if_acmpne;
	instruction[167] = ins_goto;
	instruction[168] = jsr;
	instruction[169] = ret;
	instruction[170] = tableswitch;
	instruction[171] = lookupswitch;
	instruction[172] = ireturn;
	instruction[173] = lreturn;
	instruction[174] = freturn;
	instruction[175] = dreturn;
	instruction[176] = areturn;
	instruction[177] = void_return;
	instruction[178] = getstatic;
	instruction[179] = putstatic;
	instruction[180] = getfield;
	instruction[181] = putfield;
	instruction[182] = invokevirtual;
	instruction[183] = invokespecial;
	instruction[184] = invokestatic;
	instruction[185] = invokeinterface;
	instruction[187] = ins_new;
	instruction[188] = newarray;
	instruction[189] = anewarray;
	instruction[190] = arraylength;
	instruction[192] = checkcast;
	instruction[193] = instanceof;
	instruction[196] = wide;
	instruction[197] = multianewarray;
	instruction[198] = ifnull;
	instruction[199] = ifnonnull;
	instruction[200] = goto_w;
	instruction[201] = jsr_w;
}

void nop(){
	currentFrame->pc++;
}

void aconst_null(){
	pushOperand(0);
	currentFrame->pc++;
}

void iconst_m1(){

	pushOperand((int32_t) -1);
	currentFrame->pc++;
}

void iconst_0(){
	pushOperand((int32_t) 0);
	currentFrame->pc++;
}

void iconst_1(){

	pushOperand((int32_t) 1);
	currentFrame->pc++;
}

void iconst_2(){
	pushOperand((int32_t) 2);
	currentFrame->pc++;
}

void iconst_3(){

	pushOperand((int32_t) 3);
	currentFrame->pc++;
}

void iconst_4(){

	pushOperand((int32_t) 4);
	currentFrame->pc++;
}

void iconst_5(){

	pushOperand((int32_t) 5);
	currentFrame->pc++;
}

void lconst_0(){
	pushOperand((int32_t) 0);
	pushOperand((int32_t) 0);
	currentFrame->pc++;
}

void lconst_1(){

	pushOperand((int32_t) 0);
	pushOperand((int32_t) 1);
	currentFrame->pc++;
}

void fconst_0(){
	float floatValue = 0.0;
	int intValue;
	memcpy(&intValue, &floatValue, sizeof(int32_t));
	pushOperand(intValue);
	currentFrame->pc++;
}

void fconst_1(){
	float floatValue = 1.0;
	int intValue;
	memcpy(&intValue, &floatValue, sizeof(int32_t));
	pushOperand(intValue);
	pushOperand((int32_t) 1);
	currentFrame->pc++;
}

void fconst_2(){
	float floatValue = 2.0;
	int intValue;
	memcpy(&intValue, &floatValue, sizeof(int32_t));
	pushOperand(intValue);
	currentFrame->pc++;
}

void dconst_0(){

	pushOperand((int32_t) 0);
	pushOperand((int32_t) 0);
	currentFrame->pc++;
}

void dconst_1(){
	double doubleValue = 1.0;
	int64_t intValue;
	memcpy(&intValue, &doubleValue, sizeof(int64_t));
	int32_t high = intValue >> 32;
	int32_t low = intValue & 0xffffffff;
	pushOperand(high);
	pushOperand(low);
	currentFrame->pc++;
}

void bipush(){

	//push a byte onto the stack as an integer value
    int8_t byte = currentFrame->code[currentFrame->pc+1];
    pushOperand((int32_t)byte);
	currentFrame->pc+= 2;
}

void sipush(){

	//push a short onto the stack
	int32_t shortValue = read2Bytes((currentFrame->code + currentFrame->pc + 1));
	pushOperand((int32_t)shortValue);
	currentFrame->pc += 3;
}

void ldc(){

	// push a constant #index from a constant pool (String, int or float) onto the stack
	int32_t index = currentFrame->code[currentFrame->pc+1];
	uint8_t type = currentFrame->constantPool[index].tag;
	if(type == 8){
		//String
		uint32_t string = currentFrame->constantPool[index].info.string_info->string_index;
		pushOperand(string);

	} else if(type == 3){
		//int
		uint32_t bytes = currentFrame->constantPool[index].info.integer_info->bytes;;
		pushOperand(bytes);

	} else if(type == 4){
		//float
		uint32_t bytes = currentFrame->constantPool[index].info.float_info->bytes;

		pushOperand(bytes);

	}
	currentFrame->pc += 2;
}

void ldc_w(){

	//push a constant #index from a constant pool (String, int or float) onto the stack (wide index is constructed as indexbyte1 << 8 + indexbyte2)
	int32_t offset = calculateOffset();
	uint8_t type = currentFrame->constantPool[offset].tag;
	if(type == 8){
		//String
		uint32_t string = currentFrame->constantPool[offset].info.string_info->string_index;
		pushOperand(string);

	} else if(type == 3){
		//int
		uint32_t bytes = currentFrame->constantPool[offset].info.integer_info->bytes;;
		pushOperand(bytes);

	} else if(type == 4){
		//float
		uint32_t bytes = currentFrame->constantPool[offset].info.float_info->bytes;
		pushOperand(bytes);

	}
	currentFrame->pc += 3;
}

void ldc2_w(){

	int32_t offset = calculateOffset();
	uint8_t type = currentFrame->constantPool[offset].tag;
	if(type == 5){
		//Long
		uint32_t high = currentFrame->constantPool[offset].info.long_info->high_bytes;
		uint32_t low = currentFrame->constantPool[offset].info.long_info->low_bytes;
		pushOperand(high);
		pushOperand(low);

	} else if(type == 6){
		//Double
		uint32_t high = currentFrame->constantPool[offset].info.double_info->high_bytes;
		uint32_t low = currentFrame->constantPool[offset].info.double_info->low_bytes;
		pushOperand(high);
		pushOperand(low);
	}

	currentFrame->pc += 3;
}

void iload(){

	int32_t index = currentFrame->code[currentFrame->pc+1];
	int32_t value = currentFrame->fields[index];
	pushOperand(value);
	currentFrame->pc += 2;
}

void lload(){

	//load a long value from a local variable #index
	int32_t index = currentFrame->code[currentFrame->pc+1];
	int32_t value1 = currentFrame->fields[index];
	int32_t value2 = currentFrame->fields[index+1];

	pushOperand(value1);
	pushOperand(value2);
	currentFrame->pc += 2;
}

void fload(){

	int32_t index = currentFrame->code[currentFrame->pc+1];
	int32_t value = currentFrame->fields[index];
	pushOperand(value);
	currentFrame->pc += 2;
}

void dload(){

	int32_t index = currentFrame->code[currentFrame->pc+1];
	int32_t value1 = currentFrame->fields[index];
	int32_t value2 = currentFrame->fields[index+1];
	pushOperand(value1);
	pushOperand(value2);
	currentFrame->pc += 2;
}

void aload(){
	//pega o indice
	int32_t index = currentFrame->code[currentFrame->pc+1];
	// usa o indice para achar a variavel local
	int32_t value = currentFrame->fields[index];

	//coloca na pilha
	pushOperand(value);
	currentFrame->pc += 2;
}

void iload_0(){
	int32_t value = currentFrame->fields[0];
	pushOperand(value);
	currentFrame->pc++;
}

void iload_1(){
	int32_t value = currentFrame->fields[1];
	pushOperand(value);
	currentFrame->pc++;
}

void iload_2(){
	int32_t value = currentFrame->fields[2];
	pushOperand(value);
	currentFrame->pc++;
}

void iload_3(){

	int32_t value = currentFrame->fields[3];
	pushOperand(value);
	currentFrame->pc++;
}

void lload_0(){

    int32_t high = currentFrame->fields[0 + 0];//sendo primeiro zero o indice e o segundo a posição
    pushOperand(high);
    int32_t low = currentFrame->fields[0 + 1];//sendo zero o indice e o um a posição
    pushOperand(low);

    currentFrame->pc++;
}

void lload_1(){

	int32_t high = currentFrame->fields[1 + 0];//sendo 1 o indice e o zero a posição
    pushOperand(high);
    int32_t low = currentFrame->fields[1 + 1];//sendo o primeiro 1 o indice e o segundo a posição
    pushOperand(low);
	currentFrame->pc++;
}

void lload_2(){

	int32_t high = currentFrame->fields[2 + 0];//sendo dois o indice e o zero a posição
    pushOperand(high);
    int32_t low = currentFrame->fields[2 + 1];//sendo dois o indice e o um a posição
    pushOperand(low);

	currentFrame->pc++;
}

void lload_3(){

	int32_t high = currentFrame->fields[3 + 0];//sendo tres o indice e o zero a posição
    pushOperand(high);
    int32_t low = currentFrame->fields[3 + 1];//sendo tres o indice e o um a posição
    pushOperand(low);
	currentFrame->pc++;
}

void fload_0(){

	int32_t value = currentFrame->fields[0];
	pushOperand(value);
	currentFrame->pc++;
}

void fload_1(){

	int32_t value = currentFrame->fields[1];
	pushOperand(value);
	currentFrame->pc++;
}

void fload_2(){

	int32_t value = currentFrame->fields[2];
	pushOperand(value);
	currentFrame->pc++;
}

void fload_3(){

	int32_t value = currentFrame->fields[3];
	pushOperand(value);
	currentFrame->pc++;
}

void dload_0(){

	int32_t high = currentFrame->fields[0 + 0];//sendo primeiro zero o indice e o segundo a posição
    pushOperand(high);
    int32_t low = currentFrame->fields[0 + 1];//sendo zero o indice e o um a posição
    pushOperand(low);
	currentFrame->pc++;
}

void dload_1(){

	int32_t high = currentFrame->fields[1 + 0];//sendo 1 o indice e o zero a posição
    pushOperand(high);
    int32_t low = currentFrame->fields[1 + 1];//sendo o primeiro 1 o indice e o segundo a posição
    pushOperand(low);
	currentFrame->pc++;
}

void dload_2(){

	int32_t high = currentFrame->fields[2 + 0];//sendo dois o indice e o zero a posição
    pushOperand(high);
    int32_t low = currentFrame->fields[2 + 1];//sendo dois o indice e o um a posição
    pushOperand(low);

	currentFrame->pc++;
}

void dload_3(){

	int32_t high = currentFrame->fields[3 + 0];//sendo tres o indice e o zero a posição
    pushOperand(high);
    int32_t low = currentFrame->fields[3 + 1];//sendo tres o indice e o um a posição
    pushOperand(low);
	currentFrame->pc++;
}

void aload_0(){
	// usa o indice para achar a variavel local
	int32_t value = currentFrame->fields[0];

	//coloca na pilha
	pushOperand(value);
	currentFrame->pc++;
}

void aload_1(){
	// usa o indice para achar a variavel local
	int32_t value = currentFrame->fields[1];

	//coloca na pilha
	pushOperand(value);
	currentFrame->pc++;
}

void aload_2(){
	// usa o indice para achar a variavel local
	int32_t value = currentFrame->fields[2];

	//coloca na pilha
	pushOperand(value);
	currentFrame->pc++;
}

void aload_3(){
	// usa o indice para achar a variavel local
	int32_t value = currentFrame->fields[3];

	//coloca na pilha
	pushOperand(value);
	currentFrame->pc++;
}

void iaload(){
	//Load int from array
	//Pega o indice
	uint32_t index = popOperand();
	//Pega a estrutura com o array
	arrayType *arrayStruct = (arrayType*)popOperand();
	//Acha a referencia para o array propriamente dito
	int32_t* arrayRef = (int32_t*)getArrayReference(arrayStruct);
	//Coloca na pilha h l
	pushOperand(arrayRef[index]);

	//atualiza o pc, sem argumentos

	currentFrame->pc++;


}

void laload(){
	//Load long from array
	//Pega o indice
	uint32_t index = popOperand();
	//Pega a estrutura com o array
	arrayType *arrayStruct = (arrayType*)popOperand();
	//Acha a referencia para o array propriamente dito
	uint64_t* arrayRef = (uint64_t*)getArrayReference(arrayStruct);

	//Divide os 64 bits em duas de 32
	uint32_t highBits = (uint32_t)(arrayRef[index] >> 32);
	uint32_t lowBits = (uint32_t)(arrayRef[index]);

	//Coloca na pilha os 32 bits mais significativos
	pushOperand(highBits);
	//Coloca na pilha os 32 bits menos significativos
	pushOperand(lowBits);

	currentFrame->pc++;
}

void faload(){
	//Load float from array
	//Pega o indice
	uint32_t index = popOperand();
	//Pega a estrutura com o array
	arrayType *arrayStruct = (arrayType*)popOperand();
	//Acha a referencia para o array propriamente dito
	uint32_t* arrayRef = (uint32_t*)getArrayReference(arrayStruct);
	//Coloca na pilha o float
	pushOperand(arrayRef[index]);

	//atualiza o pc, sem argumentos

	currentFrame->pc++;
}

void daload(){
	//Load double from array
	//Pega o indice
	uint32_t index = popOperand();
	//Pega a estrutura com o array
	arrayType *arrayStruct = (arrayType*)popOperand();
	//Acha a referencia para o array propriamente dito da estrutura
	uint64_t* arrayRef = (uint64_t*)getArrayReference(arrayStruct);

	//Divide os 64 bits do double em duas de 32
	uint32_t highBits = (uint32_t)(arrayRef[index] >> 32);
	uint32_t lowBits = (uint32_t)(arrayRef[index]);

	//Coloca na pilha os 32 bits mais significativos
	pushOperand(highBits);
	//Coloca na pilha os 32 bits menos significativos
	pushOperand(lowBits);

	//atualiza o pc, sem argumentos

	currentFrame->pc++;
}

void aaload(){
	//tira um index e um array da pilha e coloca na mesma o valor da pposicao
	//Pega o indice da pilha
	uint32_t indice = popOperand();
	//Pegao array
	arrayType * arrayStruct = (arrayType*)popOperand();

	//Pega a referencia de dentro da estrutura de array (pois a estrutura soh contem tbm o tamanho)
	uint32_t* arrayRef = (uint32_t*)getArrayReference(arrayStruct);

	//Coloca na pilha
	pushOperand(arrayRef[indice]);
	currentFrame->pc++;
}

void baload(){
	//Load byte from array
	//Pega o indice
	uint32_t index = popOperand();
	//Pega a estrutura com o array
	arrayType *arrayStruct = (arrayType*)popOperand();
	//Acha a referencia para o array propriamente dito
	uint8_t* arrayRef = (uint8_t*)getArrayReference(arrayStruct);
	//Coloca na pilha o byte
	pushOperand(arrayRef[index]);

	//atualiza o pc, sem argumentos

	currentFrame->pc++;

}

void caload(){
	//Load char from array
	//Pega o indice
	uint32_t index = popOperand();
	//Pega a estrutura com o array
	arrayType *arrayStruct = (arrayType*)popOperand();
	//Acha a referencia para o array propriamente dito
	uint16_t* arrayRef = (uint16_t*)getArrayReference(arrayStruct);
	//Coloca na pilha o char
	pushOperand(arrayRef[index]);

	//atualiza o pc, sem argumentos

	currentFrame->pc++;
}

void saload(){
	//Load short from array
	//Pega o indice
	uint32_t index = popOperand();
	//Pega a estrutura com o array
	arrayType *arrayStruct = (arrayType*)popOperand();
	//Acha a referencia para o array propriamente dito
	uint16_t* arrayRef = (uint16_t*)getArrayReference(arrayStruct);
	//Coloca na pilha o short
	pushOperand(arrayRef[index]);

	//atualiza o pc, sem argumentos

	currentFrame->pc++;
}

void istore(){

	//store int value into variable #index
	int32_t value = popOperand();
	int32_t index = currentFrame->code[currentFrame->pc+1];
	currentFrame->fields[index] = value;
	currentFrame->pc += 2;
}

void lstore(){

	//store a long value in a local variable #index
	int32_t low = popOperand();
	int32_t high = popOperand();
	int32_t index = currentFrame->code[currentFrame->pc+1];
	int64_t value = high;
	value <<= 32;
	value += low;
	currentFrame->fields[index] = high;
	currentFrame->fields[index+1] = low;
	currentFrame->pc += 2;
}

void fstore(){

	//store a float value into a local variable #index
	int32_t value = popOperand();
	float floatValue;
	memcpy(&floatValue, &value, sizeof(int32_t));
	int32_t index = currentFrame->code[currentFrame->pc+1];
	currentFrame->fields[index] = value;
	currentFrame->pc += 2;
}

void dstore(){

	//store a double value into a local variable #index
	int32_t low = popOperand();
	int32_t high = popOperand();
	int32_t index = currentFrame->code[currentFrame->pc+1];

	currentFrame->fields[index] = high;
	currentFrame->fields[index+1] = low;

	currentFrame->pc += 2;
}

void astore(){
	//pega da pilha o topo
	int32_t value = popOperand();
	// acha o indice para colocar no array
	int32_t index = currentFrame->code[currentFrame->pc+1];

	// usa o indice para achar a posicao que quer do array de variaveis
	currentFrame->fields[index] = value;
	currentFrame->pc += 2;
}

void istore_0(){

	int32_t value = popOperand();
	currentFrame->fields[0] = value;
	currentFrame->pc++;
}

void istore_1(){
	int32_t value = popOperand();
	currentFrame->fields[1] = value;
	currentFrame->pc++;
}

void istore_2(){

	int32_t value = popOperand();
	currentFrame->fields[2] = value;
	currentFrame->pc++;
}

void istore_3(){

	int32_t value = popOperand();
	currentFrame->fields[3] = value;
	currentFrame->pc++;
}

void lstore_0(){

	int32_t low = popOperand();
	currentFrame->fields[0] = low;
	int32_t high = popOperand();
	currentFrame->fields[1] = high;
	currentFrame->pc++;
}

void lstore_1(){

	int32_t low = popOperand();
	currentFrame->fields[2] = low;
	int32_t high = popOperand();
	currentFrame->fields[1] = high;
	currentFrame->pc++;
}

void lstore_2(){


	int32_t low = popOperand();
	currentFrame->fields[3] = low;
	int32_t high = popOperand();
	currentFrame->fields[2] = high;
	int64_t value = high;
	value <<= 32;
	value += low;
	currentFrame->pc++;
}

void lstore_3(){


	int32_t low = popOperand();

	currentFrame->fields[4] = low;
	int32_t high = popOperand();
	currentFrame->fields[3] = high;
	currentFrame->pc++;
}

void fstore_0(){

	int32_t value = popOperand();
	currentFrame->fields[0] = value;
	currentFrame->pc++;
}

void fstore_1(){
	int32_t value = popOperand();
	currentFrame->fields[1] = value;
	currentFrame->pc++;
}

void fstore_2(){

	int32_t value = popOperand();
	currentFrame->fields[2] = value;
	currentFrame->pc++;

}

void fstore_3(){

	int32_t value = popOperand();
	currentFrame->fields[3] = value;
	currentFrame->pc++;
}

void dstore_0(){

	int32_t low = popOperand();
	currentFrame->fields[1] = low;
	int32_t high = popOperand();
	currentFrame->fields[0] = high;
	currentFrame->pc++;
}

void dstore_1(){

	int32_t low = popOperand();
	currentFrame->fields[2] = low;
	int32_t high = popOperand();
	currentFrame->fields[1] = high;
	currentFrame->pc++;
}

void dstore_2(){

	int32_t low = popOperand();
	currentFrame->fields[3] = low;
	int32_t high = popOperand();
	currentFrame->fields[2] = high;
	currentFrame->pc++;
}

void dstore_3(){

	int32_t low = popOperand();
	currentFrame->fields[4] = low;
	int32_t high = popOperand();
	currentFrame->fields[3] = high;
	currentFrame->pc++;
}

void astore_0(){
	// tira o valor da pilha
	int32_t value = popOperand();
	//acessa a variavel local e coloca no indice certo o value que estava na pilha
	currentFrame->fields[0] = value;
	currentFrame->pc++;

}

void astore_1(){
	// tira o valor da pilha
	int32_t value = popOperand();
	//acessa a variavel local e coloca no indice certo o value que estava na pilha
	currentFrame->fields[1] = value;
	currentFrame->pc++;


}

void astore_2(){
	// tira o valor da pilha
	int32_t value = popOperand();
	//acessa a variavel local e coloca no indice certo o value que estava na pilha
	currentFrame->fields[2] = value;
	currentFrame->pc++;
}

void astore_3(){
	// tira o valor da pilha
	int32_t value = popOperand();
	//acessa a variavel local e coloca no indice certo o value que estava na pilha
	currentFrame->fields[3] = value;
	currentFrame->pc++;

}

void iastore(){
	//tira um inteiro um index e um array da pilha e coloca o valor na posicao definida pelo index
	//tira o inteiro
	int32_t value = popOperand();
	//Pega o indice da pilha
	uint32_t index = popOperand();
	//Pega array
	arrayType * arrayStruct = (arrayType*) popOperand();

	//Pega a referencia de dentro da estrutura de array (pois a estrutura soh contem tbm o tamanho)
	uint32_t* arrayRef = (uint32_t*)getArrayReference(arrayStruct);

	//Coloca no vetor
	arrayRef[index] = value;
	currentFrame->pc++;
}

void lastore(){

	//tira um long um index e um array da pilha e coloca o valor na posicao definida pelo index
	//tira o inteiro
	uint32_t lowBits = popOperand();
	uint32_t highBits = popOperand();

	uint64_t value = ((uint64_t)highBits << 32) | lowBits;

	//Pega o indice da pilha
	uint32_t index = popOperand();
	//Pega array
	arrayType * arrayStruct = (arrayType*)popOperand();

	//Pega a referencia de dentro da estrutura de array (pois a estrutura soh contem tbm o tamanho)
	uint64_t* arrayRef = (uint64_t*)getArrayReference(arrayStruct);

	//Coloca no vetor
	arrayRef[index] = value;
	currentFrame->pc++;
}

void fastore(){

	//tira um float um index e um array da pilha e coloca o valor na posicao definida pelo index
	//tira o float
	uint32_t value = popOperand();
	//Pega o indice da pilha
	uint32_t index = popOperand();
	//Pega array
	arrayType * arrayStruct = (arrayType*)popOperand();

	//Pega a referencia de dentro da estrutura de array (pois a estrutura soh contem tbm o tamanho)
	uint32_t* arrayRef = (uint32_t*)getArrayReference(arrayStruct);

	//Coloca no vetor
	arrayRef[index] = value;
	currentFrame->pc++;
}

void dastore(){
	//tira um double um index e um array da pilha e coloca o valor na posicao definida pelo index
	//tira o inteiro
	uint32_t lowBits = popOperand();
	uint32_t highBits = popOperand();

	uint64_t value = ((uint64_t)highBits << 32) | lowBits;

	//Pega o indice da pilha
	uint32_t index = popOperand();
	//Pega array
	arrayType * arrayStruct = (arrayType*)popOperand();

	//Pega a referencia de dentro da estrutura de array (pois a estrutura soh contem tbm o tamanho)
	uint64_t* arrayRef = (uint64_t*)getArrayReference(arrayStruct);

	//Coloca no vetor
	arrayRef[index] = value;
	currentFrame->pc++;
}

void aastore(){
	//tira um valor um index e um array da pilha e coloca o valor na posicao definida pelo index
	//tira o valor
	uint32_t value = popOperand();
	//Pega o indice da pilha
	uint32_t indice = popOperand();
	//Pega array
	arrayType * arrayStruct = (arrayType*)popOperand();

	//Pega a referencia de dentro da estrutura de array (pois a estrutura soh contem tbm o tamanho)
	uint32_t* arrayRef = (uint32_t*)getArrayReference(arrayStruct);

	//Coloca no vetor
	arrayRef[indice] = value;
	currentFrame->pc++;

}

void bastore(){

	//tira um byte um index e um array da pilha e coloca o valor na posicao definida pelo index
	//tira o byte
	uint32_t value = popOperand();
	//Pega o indice da pilha
	uint32_t index = popOperand();
	//Pega array
	arrayType * arrayStruct = (arrayType*)popOperand();

	//Pega a referencia de dentro da estrutura de array (pois a estrutura soh contem tbm o tamanho)
	uint8_t* arrayRef = (uint8_t*)getArrayReference(arrayStruct);

	//Coloca no vetor
	arrayRef[index] = value;
	currentFrame->pc++;

}

void castore(){

	//tira um float um index e um array da pilha e coloca o valor na posicao definida pelo index
	//tira o float
	uint32_t value = popOperand();
	//Pega o indice da pilha
	uint32_t index = popOperand();
	//Pega array
	arrayType * arrayStruct = (arrayType*)popOperand();

	//Pega a referencia de dentro da estrutura de array (pois a estrutura soh contem tbm o tamanho)
	uint16_t* arrayRef = (uint16_t*)getArrayReference(arrayStruct);

	//Coloca no vetor
	arrayRef[index] = value;
	currentFrame->pc++;
}

void sastore(){

	//tira um short um index e um array da pilha e coloca o valor na posicao definida pelo index
	//tira o short
	uint32_t value = popOperand();
	//Pega o indice da pilha
	uint32_t index = popOperand();
	//Pega array
	arrayType * arrayStruct = (arrayType*)popOperand();

	//Pega a referencia de dentro da estrutura de array (pois a estrutura soh contem tbm o tamanho)
	uint16_t* arrayRef = (uint16_t*)getArrayReference(arrayStruct);

	//Coloca no vetor
	arrayRef[index] = value;
	currentFrame->pc++;
}

void pop(){
	popOperand();
	currentFrame->pc++;
}

void pop2(){

	popOperand();
	popOperand();
	currentFrame->pc++;
}

void dup(){
	int32_t value = popOperand();
	pushOperand(value);
	pushOperand(value);
	currentFrame->pc++;
}

void dup_x1(){
	//TODO
	//FUNÇÃO QUE ATUALIZA PC QUANDO TEM ARGUMENTO
}

void dup_x2(){

	//TODO
	//FUNÇÃO QUE ATUALIZA PC QUANDO TEM ARGUMENTO
}

void dup2(){

	int32_t top = popOperand();
	int32_t sub_top = popOperand();
	pushOperand(sub_top);
	pushOperand(top);
	pushOperand(sub_top);
	pushOperand(top);
	currentFrame->pc++;
}

void dup2_x1(){

	//TODO
	//FUNÇÃO QUE ATUALIZA PC QUANDO TEM ARGUMENTO
}

void dup2_x2(){
	//TODO
	//FUNÇÃO QUE ATUALIZA PC QUANDO TEM ARGUMENTO
}

void swap(){
	int32_t value1 = popOperand();
	int32_t value2 = popOperand();
	pushOperand(value1);
	pushOperand(value2);
	currentFrame->pc++;
}

void iadd(){
	int32_t op1 = popOperand();
	int32_t op2 = popOperand();
	int32_t result = op1 + op2;
	pushOperand(result);
	currentFrame->pc++;
}

void ladd(){
	int32_t op1Low = popOperand();
	int32_t op1High = popOperand();
	int64_t op1;
	op1 = op1High;
	op1 <<= 32;
	op1 = op1 + op1Low;

	//construindo o segundo operador
	int32_t op2Low = popOperand();
	int32_t op2High = popOperand();
	int64_t op2;
	op2 = op2High;
	op2 <<= 32;
	op2 = op2 + op2Low;

	//realizando a operação
	int64_t result = op1+op2;

	//coloca os 64 bits em variáveis de 32 bits
	int32_t resultHigh = result >> 32;
	int32_t resultLow = result & 0xffffffff;

	//empilha resultado
	pushOperand(resultHigh);
	pushOperand(resultLow);

	//atualiza pc
	currentFrame->pc++;

}

void fadd(){
	int32_t int2 = popOperand();
	int32_t int1 = popOperand();
	float floatValue1;
	float floatValue2;
	memcpy(&floatValue1, &int1, sizeof(int32_t));
	memcpy(&floatValue2, &int2, sizeof(int32_t));
	float result = floatValue1 + floatValue2;
	int resultInt;
	memcpy(&resultInt, &result, sizeof(int32_t));
	pushOperand(resultInt);
	currentFrame->pc++;
}

void dadd(){
	int32_t op1Low = popOperand();
	int32_t op1High = popOperand();
	int64_t op1;
	op1 = op1High;
	op1 <<= 32;
	op1 = op1 + op1Low;

	int32_t op2Low = popOperand();
	int32_t op2High = popOperand();
	int64_t op2;
	op2 = op2High;
	op2 <<= 32;
	op2 = op2 + op2Low;

	//escrevendo em double
	double op1;
	memcpy(&op1, &op1, sizeof(int64_t));

	//escrevendo em double
	double op2;
	memcpy(&op2, &op2, sizeof(int64_t));

	//realizando a operação

	double resultDouble = op1 + op2;

	//escrevendo em double
	int64_t result;
	memcpy(&result, &resultDouble, sizeof(int64_t));

	//coloca os 64 bits em variáveis de 32 bits
	int32_t resultHigh = result >> 32;
	int32_t resultLow = result & 0xffffffff;

	//empilha resultado
	pushOperand(resultHigh);
	pushOperand(resultLow);

	//atualiza pc
	currentFrame->pc++;
}

void isub(){

	int32_t op2 = popOperand();
	int32_t op1 = popOperand();
	int32_t result = op1 - op2;
	pushOperand(result);
	currentFrame->pc++;
}

void lsub(){

	//construindo o primeiro operador
	int32_t op1Low = popOperand();
	int32_t op1High = popOperand();

	int64_t op1;
	op1 = op1High;
	op1 <<= 32;
	op1 = op1 + op1Low;
	//construindo o segundo operador
	int32_t op2Low = popOperand();
	int32_t op2High = popOperand();

	int64_t op2;
	op2 = op2High;
	op2 <<= 32;
	op2 = op2 + op2Low;
		//realizando a operação
	int64_t result = op2-op1;
	//coloca os 64 bits em variáveis de 32 bits
	int32_t resultHigh = result >> 32;
	int32_t resultLow = result & 0xffffffff;
	//empilha resultado
	pushOperand(resultHigh);
	pushOperand(resultLow);

	//atualiza pc
	currentFrame->pc++;
}

void fsub(){

	int32_t op2 = popOperand();
	int32_t op1 = popOperand();
	float op1, op2;
	memcpy(&op1, &op1  sizeof(int32_t));
	memcpy(&op2, &op2, sizeof(int32_t));
	float resultFloat = op1-op2;
	int32_t result;
	memcpy(&result, &resultFloat, sizeof(int32_t));
	pushOperand(result);
	currentFrame->pc++;
}

void dsub(){

	//construindo o primeiro operador
	int32_t op1Low = popOperand();
	int32_t op1High = popOperand();

	int64_t op1;
	op1 = op1High;
	op1 <<= 32;
	op1 = op1 + op1Low;

	//construindo o segundo operador
	int32_t op2Low = popOperand();
	int32_t op2High = popOperand();

	int64_t op2;
	op2 = op2High;
	op2 <<= 32;
	op2 = op2 + op2Low;

	//escrevendo em double
	double op1
	memcpy(&op1  &op1, sizeof(int64_t));

	//escrevendo em double
	double op2;
	memcpy(&op2, &op2, sizeof(int64_t));

	//realizando a operação
	double resultDouble = op2 - op1;

	//escrevendo em double
	int64_t result;
	memcpy(&result, &resultDouble, sizeof(double));

	//coloca os 64 bits em variáveis de 32 bits
	int32_t resultHigh = result >> 32;
	int32_t resultLow = result & 0xffffffff;

	//empilha resultado
	pushOperand(resultHigh);
	pushOperand(resultLow);

	//atualiza pc
	currentFrame->pc++;
}

void imul(){

	int32_t op1 = popOperand();
	int32_t op2 = popOperand();
	int32_t result = op1 * op2;
	pushOperand(result);
	currentFrame->pc++;

}

void lmul(){

	//construindo o primeiro operador
	int32_t op1Low = popOperand();
	int32_t op1High = popOperand();
	int64_t op1;
	op1 = op1High;
	op1 <<= 32;
	op1 = op1 + op1Low;

	//construindo o segundo operador
	int32_t op2Low = popOperand();
	int32_t op2High = popOperand();
	int64_t op2;
	op2 = op2High;
	op2 <<= 32;
	op2 = op2 + op2Low;

	//realizando a operação
	int64_t result = op1*op2;

	//coloca os 64 bits em variáveis de 32 bits
	int32_t resultHigh = result >> 32;
	int32_t resultLow = result & 0xffffffff;

	//empilha resultado
	pushOperand(resultHigh);
	pushOperand(resultLow);

	//atualiza pc
	currentFrame->pc++;
}

void fmul(){

	int32_t op2 = popOperand();
	int32_t op1 = popOperand();
	float op1, op2;
	memcpy(&op1, &op1, sizeof(int32_t));
	memcpy(&op2, &op2, sizeof(int32_t));
	float resultFloat = op1*op2;
	int32_t result;
	memcpy(&result, &resultFloat, sizeof(int32_t));
	pushOperand(result);
	currentFrame->pc++;

}

void dmul(){

	//construindo o primeiro operador
	int32_t op1Low = popOperand();
	int32_t op1High = popOperand();

	int64_t op1;
	op1 = op1High;
	op1 <<= 32;
	op1 = op1 + op1Low;

	//construindo o segundo operador
	int32_t op2Low = popOperand();
	int32_t op2High = popOperand();
	int64_t op2;
	op2 = op2High;
	op2 <<= 32;
	op2 = op2 + op2Low;

	//escrevendo em double
	double op1;
	memcpy(&op1, &op1, sizeof(int64_t));

	//escrevendo em double
	double op2;
	memcpy(&op2, &op2, sizeof(int64_t));

	//realizando a operação
	double resultDouble = op1 * op2;

	//escrevendo em double
	int64_t result;
	memcpy(&result, &resultDouble, sizeof(double));

	//coloca os 64 bits em variáveis de 32 bits
	int32_t resultHigh = result >> 32;
	int32_t resultLow = result & 0xffffffff;

	//empilha resultado
	pushOperand(resultHigh);
	pushOperand(resultLow);

	//atualiza pc
	currentFrame->pc++;
}

void idiv(){

	int32_t op2 = popOperand();
	int32_t op1 = popOperand();
	int32_t result = op1/op2;
	pushOperand(result);
	currentFrame->pc++;
}

void ins_ldiv(){
	int32_t op1Low = popOperand();
	int32_t op1High = popOperand();
	int64_t op1;
	op1 = op1High;
	op1 <<= 32;
	op1 = op1 + op1Low;

	//construindo o segundo operador
	int32_t op2Low = popOperand();
	int32_t op2High = popOperand();
	int64_t op2;
	op2 = op2High;
	op2 <<= 32;
	op2 = op2 + op2Low;

	//realizando a operação
	int64_t result = op2/op1;

	//coloca os 64 bits em variáveis de 32 bits
	int32_t resultHigh = result >> 32;
	int32_t resultLow = result & 0xffffffff;

	//empilha resultado
	pushOperand(resultHigh);
	pushOperand(resultLow);

	//atualiza pc
	currentFrame->pc++;

}

void fdiv(){

	int32_t op2 = popOperand();
	int32_t op1 = popOperand();
	float op1, op2;
	memcpy(&op1, &op1, sizeof(int32_t));
	memcpy(&op2, &op2, sizeof(int32_t));
	float resultFloat = op1/op2;
	int32_t result;
	memcpy(&result, &resultFloat, sizeof(int32_t));
	pushOperand(result);
	currentFrame->pc++;

}

void ddiv(){

	//construindo o primeiro operador
	int32_t op1Low = popOperand();
	int32_t op1High = popOperand();
	int64_t op1;
	op1 = op1High;
	op1 <<= 32;
	op1 = op1 + op1Low;

	//construindo o segundo operador
	int32_t op2Low = popOperand();
	int32_t op2High = popOperand();
	int64_t op2;
	op2 = op2High;
	op2 <<= 32;
	op2 = op2 + op2Low;

	//escrevendo em double
	double op1;
	memcpy(&op1, &op1, sizeof(int64_t));

	//escrevendo em double
	double op2;
	memcpy(&op2, &op2, sizeof(int64_t));

	//realizando a operação
	double resultDouble = op2/op1;

	//escrevendo em double
	int64_t result;
	memcpy(&result, &resultDouble, sizeof(double));

	//coloca os 64 bits em variáveis de 32 bits
	int32_t resultHigh = result >> 32;
	int32_t resultLow = result & 0xffffffff;

	//empilha resultado
	pushOperand(resultHigh);
	pushOperand(resultLow);

	//atualiza pc
	currentFrame->pc++;

}

void irem(){

	int32_t op2= popOperand();
	int32_t op1 = popOperand();
	int32_t result = op1%op2;
	pushOperand(result);
	currentFrame->pc++;

}

void lrem(){

	int32_t op1Low = popOperand();
	int32_t op1High = popOperand();
	int64_t op1 = op1High;
	op1 = op1 >> 32;
	op1 = op1 + op1Low;

	int32_t op2Low = popOperand();
	int32_t op2High = popOperand();
	int64_t op2 = op1High;
	op2 = op2 << 32;
	op2 = op2 + op2Low;

	int64_t resultLong = op2%op1;

	int32_t resultHigh = resultLong >> 32;
	int32_t resultLow = resultLong & 0xffffffff;

	pushOperand(resultHigh);
	pushOperand(resultLow);

	currentFrame->pc++;

}

void frem(){

	int32_t op2 = popOperand();
	int32_t op1 = popOperand();
	float op1, op2;
	memcpy(&op1, &op1, sizeof(int32_t));
	memcpy(&op2, &op2, sizeof(int32_t));
	float resultFloat = fmodf(op1,op2);
	int32_t result;
	memcpy(&result, &resultFloat, sizeof(int32_t));
	pushOperand(result);
	currentFrame->pc++;

}

void _drem(){

	int32_t op1Low = popOperand();
	int32_t op1High = popOperand();
	int64_t op1 = op1High;
	op1 <<= 32;
	op1 = op1 + op1Low;


	int32_t op2Low = popOperand();
	int32_t op2High = popOperand();
	int64_t op2 = op2High;
	op2 <<= 32;
	op2 = op2 + op2Low;

	double double1;
	double double2;
	memcpy(&double1, &op1, sizeof(int64_t));
	memcpy(&double2, &op2, sizeof(int64_t));
	double resultDouble = fmod(double2, double1);
	int64_t result;
	memcpy(&result, &resultDouble, sizeof(int64_t));

	int32_t resultHigh = result >> 32;
	int32_t resultLow = result & 0xffffffff;

	pushOperand(resultHigh);
	pushOperand(resultLow);

	currentFrame->pc++;

}

void ineg(){

	int32_t operator = popOperand();
	int32_t result = -operator;
	pushOperand(result);
	currentFrame->pc++;

}

void lneg(){

	int32_t operatorLow = popOperand();
	int32_t operatorHigh = popOperand();
	int64_t operator = operatorHigh;
	operator = operator << 32;
	operator |= operatorLow;

	//escrevendo em long
	long op;
	memcpy(&op, &operator, sizeof(int64_t));

	long resultLong = -op;

	//escrevendo em long
	int64_t result;
	memcpy(&result, &resultLong, sizeof(int64_t));

	int32_t high = result >> 32;
	int32_t low = result & 0xffffffff;

	pushOperand(high);
	pushOperand(low);
	currentFrame->pc++;

}

void fneg(){

	int32_t operator = popOperand();
	float valueFloat;
	memcpy(&valueFloat, &operator, sizeof(int32_t));
	float resultFloat = -(valueFloat);
	int32_t result;
	memcpy(&result, &resultFloat, sizeof(int32_t));
	pushOperand(result);
	currentFrame->pc++;

}

void dneg(){
	int32_t low = popOperand();
	int32_t high = popOperand();
	int64_t intValue = high;
	intValue <<= 32;
	intValue += low;
	double value;
	memcpy(&value, &intValue, sizeof(int64_t));

	value = -value;
	memcpy(&intValue, &value, sizeof(int64_t));

	high = intValue >> 32;
	low = intValue & 0xffffffff;
	//escrevendo em double

	pushOperand(high);
	pushOperand(low);
	currentFrame->pc++;

}

void ishl(){

	//int shift left
	int32_t shift = popOperand();
	int32_t shifted = shift5Bits(shift);
	int32_t value = popOperand();
	int32_t result = value << shifted;
	pushOperand(result);
	currentFrame->pc++;

}

void lshl(){

	//long shift left
	int32_t shift = popOperand();
	shift6Bits(shift);
	//desempilhando parte alta e baixa
	int32_t low = popOperand();
	int32_t high = popOperand();
	//construção do resultado
	int64_t resultLong = high;
	resultLong = resultLong << 32;
	resultLong = resultLong + low;
	//realizando a operação
	resultLong = resultLong << shift;
	//dividindo o resultado em int32
	int32_t result1 = resultLong >> 32;
	int32_t result2 = resultLong & 0xffffffff;
	//empilhando os resultados
	pushOperand(result1);
	pushOperand(result2);
	currentFrame->pc++;

}

void ishr(){

	//int shift right
	int32_t shift = popOperand();
	int32_t shifted = shift5Bits(shift);
	int32_t value = popOperand();
	int32_t result = value >> shifted;
	pushOperand(result);
	currentFrame->pc++;

}

void lshr(){

	//long shift left
	int32_t shift = popOperand();
	shift6Bits(shift);
	//desempilhando parte alta e baixa
	int32_t low = popOperand();
	int32_t high = popOperand();
	//construção do resultado
	int64_t resultLong = high;
	resultLong = resultLong << 32;
	resultLong = resultLong + low;
	//realizando a operação
	resultLong = resultLong >> shift;
	//dividindo o resultado em int32
	int32_t result1 = resultLong >> 32;
	int32_t result2 = resultLong & 0xffffffff;
	//empilhando os resultados
	pushOperand(result1);
	pushOperand(result2);
	currentFrame->pc++;

}

void iushr(){
	//int shift right
	int32_t shift = popOperand();
	int32_t shifted = shift5Bits(shift);
	int32_t value = popOperand();
	int32_t result = value >> shifted;
	pushOperand(result);
	currentFrame->pc++;

}

void lushr(){
	//long shift left
	int32_t shift = popOperand();
	shift6Bits(shift);
	//desempilhando parte alta e baixa
	int32_t high = popOperand();
	int32_t low = popOperand();
	//construção do resultado
	int64_t resultLong = high;
	resultLong = resultLong << 32;
	resultLong = resultLong + low;
	//realizando a operação
	resultLong = resultLong >> shift;
	//dividindo o resultado em int32
	int32_t result1 = resultLong >> 32;
	int32_t result2 = resultLong & 0xffffffff;
	//empilhando os resultados
	pushOperand(result1);
	pushOperand(result2);
	currentFrame->pc++;

}

void iand(){

	int32_t op1 = popOperand();
	int32_t op2 = popOperand();
	int32_t result = op1&op2;
	pushOperand(result);
	currentFrame->pc++;
}

void land(){

	int32_t op1Low = popOperand();
	int32_t op1High = popOperand();
	int64_t op1 = op1High;
	op1 = op1 >> 32;
	op1 = op1 + op1Low;

	int32_t op2Low = popOperand();
	int32_t op2High = popOperand();
	int64_t op2 = op1High;
	op2 = op2 << 32;
	op2 = op2 + op2Low;

	int64_t resultLong = op1&op2;

	int32_t resultHigh = resultLong >> 32;
	int32_t resultLow = resultLong & 0xffffffff;

	pushOperand(resultHigh);
	pushOperand(resultLow);
	currentFrame->pc++;

}

void ior(){

	int32_t op1 = popOperand();
	int32_t op2 = popOperand();
	int32_t result = op1|op2;
	pushOperand(result);
	currentFrame->pc++;
}

void lor(){

	int32_t op1Low = popOperand();
	int32_t op1High = popOperand();
	int64_t op1 = op1High;
	op1 = op1 >> 32;
	op1 = op1 + op1Low;

	int32_t op2Low = popOperand();
	int32_t op2High = popOperand();
	int64_t op2 = op1High;
	op2 = op2 << 32;
	op2 = op2 + op2Low;

	int64_t resultLong = op1|op2;

	int32_t resultHigh = resultLong >> 32;
	int32_t resultLow = resultLong & 0xffffffff;

	pushOperand(resultHigh);
	pushOperand(resultLow);
	currentFrame->pc++;

}

void ixor(){
	int32_t op1 = popOperand();
	int32_t op2 = popOperand();
	int32_t result = op1^op2;
	pushOperand(result);
	currentFrame->pc++;
}

void lxor(){
	int32_t op1Low = popOperand();
	int32_t op1High = popOperand();
	int64_t op1 = op1High;
	op1 = op1 >> 32;
	op1 = op1 + op1Low;

	int32_t op2Low = popOperand();
	int32_t op2High = popOperand();
	int64_t op2 = op1High;
	op2 = op2 << 32;
	op2 = op2 + op2Low;

	int64_t resultLong = op1^op2;

	int32_t resultHigh = resultLong >> 32;
	int32_t resultLow = resultLong & 0xffffffff;

	pushOperand(resultHigh);
	pushOperand(resultLow);
	currentFrame->pc++;

}

void iinc(){
	uint8_t index = currentFrame->code[currentFrame->pc+1];
	int8_t value = currentFrame->code[currentFrame->pc+2];
	currentFrame->fields[index]+=value;
	currentFrame->pc+=3;
}

void i2l(){

	// 	convert an int into a long
	int32_t integer = popOperand();
	long valueLong = (long)integer;
	int64_t value;

	memcpy(&value, &valueLong, sizeof(int64_t));

	int32_t high = value >> 32;
	int32_t low  = value & 0xffffffff;

	pushOperand(high);
	pushOperand(low);
	currentFrame->pc++;


}

void i2f(){

	//convert an int into a float
	int32_t integer = popOperand();
	float toFloat = (float) integer;
	memcpy(&integer, &toFloat, sizeof(int32_t));
	pushOperand(integer);
	currentFrame->pc++;

}

void i2d(){
	int32_t integer = popOperand();
	double valueDouble = (double)integer;

	int64_t value;

	memcpy(&value, &valueDouble, sizeof(int64_t));

	int32_t high = value >> 32;
	int32_t low  = value & 0xffffffff;

	pushOperand(high);
	pushOperand(low);
	currentFrame->pc++;

}

void l2i(){

	int32_t low = popOperand();
	int32_t high  = popOperand();
	int64_t op = high;
	op <<=32;
	op |= low;
	int32_t result = (int32_t)op;
	pushOperand(result);
	currentFrame->pc++;

}

void l2f(){
	int32_t low = popOperand();
	int32_t high = popOperand();

	float valueFloat = (float)low;
	int32_t value;

	memcpy(&value, &valueFloat, sizeof(int32_t));

	pushOperand(value);
	currentFrame->pc++;

}

void l2d(){

	int32_t low = popOperand();
	int32_t high = popOperand();
	int64_t valueLong = high;
	valueLong = valueLong <<32;
	valueLong = valueLong + low;
	double valueDouble = (double) valueLong;
	int64_t value;
	memcpy(&value, &valueDouble, sizeof(int64_t));
	pushOperand(value);
	currentFrame->pc++;

}

void f2i(){

	//convert an float into a int
	int32_t integer = popOperand();
	float toFloat;
	memcpy(&toFloat, &integer, sizeof(int32_t));
	int32_t result = (int32_t) toFloat;
	pushOperand(result);
	currentFrame->pc++;

}

void f2l(){
	int32_t intValue = popOperand();
	float floatValue;
	memcpy(&floatValue, &intValue, sizeof(int32_t));
	long valueLong = (long) floatValue;
	int64_t value;
	memcpy(&value, &valueLong, sizeof(int64_t));
	int32_t high = value >> 32;
	int32_t low = value & 0xffffffff;
	pushOperand(high);
	pushOperand(low);
	currentFrame->pc++;

}

void f2d(){
	int32_t intValue = popOperand();
	float floatValue;
	memcpy(&floatValue, &intValue, sizeof(int32_t));
	double valueDouble = (double) floatValue;
	int64_t value;
	memcpy(&value, &valueDouble, sizeof(int64_t));
	int32_t high = value >> 32;
	int32_t low = value & 0xffffffff;
	pushOperand(high);
	pushOperand(low);
	currentFrame->pc++;
}

void d2i(){
	int32_t low = popOperand();
	int32_t high = popOperand();
	int64_t intValue = high;
	intValue <<= 32;
	intValue += low;
	double doubleValue;
	memcpy(&doubleValue, &intValue, sizeof(int64_t));
	int32_t value = (int) doubleValue;
	pushOperand(value);
	currentFrame->pc++;

}

void d2l(){
	int32_t low = popOperand();
	int64_t high = popOperand();
	int64_t intValue = high;
	intValue = intValue << 32;
	intValue += low;
	double doubleValue;
	memcpy(&doubleValue, &intValue, sizeof(int64_t));
	int64_t valueLong = (long) doubleValue;
	int32_t highValue = valueLong >> 32;
	int32_t lowValue = valueLong & 0xffffffff;
	pushOperand(highValue);
	pushOperand(lowValue);
	currentFrame->pc++;
}

void d2f(){
	int32_t low = popOperand();
	int32_t high = popOperand();
	double doubleValue;
	int64_t intValue;
	intValue = high;
	intValue <<= 32;
	intValue += low;
	memcpy(&doubleValue, &intValue, sizeof(int64_t));
	float valueFloat = (float)doubleValue;
	int32_t value;
	memcpy(&value, &valueFloat, sizeof(int32_t));
	pushOperand(value);
	currentFrame->pc++;
}

void i2b(){
	int32_t integer = popOperand();
	int8_t byte = (int8_t) integer;
	pushOperand(byte);
	currentFrame->pc++;
}

void i2c(){
	int32_t integer = popOperand();
	uint8_t character = (uint8_t) integer;
	pushOperand((int32_t) character);
	currentFrame->pc++;
}

void i2s(){
	int32_t integer = popOperand();
	short valueShort = (short) integer;
	int16_t value;
	memcpy(&value, &valueShort, sizeof(int16_t));
	pushOperand((int32_t)value);
	currentFrame->pc++;
}

void lcmp(){
	//push 0 if the two longs are the same, 1 if value1 is greater than value2, -1 otherwise
	//long 1
	int32_t long1Low = popOperand();
	int32_t long1High = popOperand();
	//contrucao do long
	int64_t long1 = long1High;
	long1 = long1 >> 32;
	long1 = long1 + long1Low;

	//long 2
	int32_t long2Low = popOperand();
	int32_t long2High = popOperand();

	//contrucao do long
	int64_t long2 = long2High;
	long2 = long2 >> 32;
	long2 = long2 + long2Low;

	long value1Long;
	memcpy(&value1Long, &long1, sizeof(int64_t));
	long value2Long;
	memcpy(&value2Long, &long2, sizeof(int64_t));
	verifyLongs(value1Long, value2Long);

	currentFrame->pc++;

}

void fcmpl(){
	//compare two floats
	//desempilhando dois valores da pilha
	int32_t value1 = popOperand();
	int32_t value2 = popOperand();
	float value1Float;
	float value2Float;
	//transformando int32 em float
	memcpy(&value1Float, &value1, sizeof(int32_t));
	memcpy(&value2Float, &value2, sizeof(int32_t));
	//comparando os floats
	verifyFloats(value1Float, value2Float);
	//atualizando pc
	currentFrame->pc++;
}

void fcmpg(){
	//compare two floats
	//desempilhando dois valores da pilha
	int32_t value1 = popOperand();
	int32_t value2 = popOperand();
	float value1Float;
	float value2Float;
	//transformando int32 em float
	memcpy(&value1Float, &value1, sizeof(int32_t));
	memcpy(&value2Float, &value2, sizeof(int32_t));
	//comparando os floats
	verifyFloats(value1Float, value2Float);
	//atualizando pc
	currentFrame->pc++;
}

void dcmpl(){
	//double 1
	int32_t double1Low = popOperand();
	int32_t double1High = popOperand();
	//contrucao do double
	int64_t double1 = double1High;
	double1 = double1 << 32;
	double1 = double1 + double1Low;

	//double 2
	int32_t double2Low = popOperand();
	int32_t double2High = popOperand();

	//contrucao do double
	int64_t double2 = double2High;
	double2 = double2 << 32;
	double2 = double2 + double2Low;

	double value1Double;
	memcpy(&value1Double, &double1, sizeof(int64_t));
	double value2Double;
	memcpy(&value2Double, &double2, sizeof(int64_t));
	verifyDoubles(value1Double, value2Double);

	currentFrame->pc++;
}

void dcmpg(){
	//double 1
	int32_t double1High = popOperand();
	int32_t double1Low = popOperand();
	//contrucao do double
	int64_t double1 = double1High;
	double1 = double1 >> 32;
	double1 = double1 + double1Low;

	//double 2
	int32_t double2High = popOperand();
	int32_t double2Low = popOperand();

	//contrucao do double
	int64_t double2 = double2High;
	double2 = double2 >> 32;
	double2 = double2 + double2Low;

	double value1Double;
	memcpy(&value1Double, &double1, sizeof(int64_t));
	double value2Double;
	memcpy(&value2Double, &double2, sizeof(int64_t));

	verifyDoubles(value1Double, value2Double);

	currentFrame->pc++;
}

void ifeq(){
	//if value is 0, branch to instruction at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2)
	int32_t value = popOperand();
	int32_t branchOffset = calculateOffset();
	if (value == 0)
	{
		currentFrame->pc = currentFrame->pc + branchOffset;
	} else {
		currentFrame->pc += 3;
	}
}

void ifne(){
	//if value is not 0, branch to instruction at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2)
	int32_t value = popOperand();
	int32_t branchOffset = calculateOffset();
	if (value != 0) {
		currentFrame->pc = currentFrame->pc + branchOffset;
	} else {
		currentFrame->pc += 3;
	}
}

void iflt(){
	//if value is less than 0, branch to instruction at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2)
	int32_t value = popOperand();
	int32_t branchOffset = calculateOffset();
	if (value < 0)
	{
		currentFrame->pc = currentFrame->pc + branchOffset;
	} else {
		currentFrame->pc += 3;
	}
}

void ifge(){
	//if value is greater or equal than 0, branch to instruction at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2)
	int32_t value = popOperand();
	int32_t branchOffset = calculateOffset();
	if (value >= 0)
	{
		currentFrame->pc = currentFrame->pc + branchOffset;
	} else {
		currentFrame->pc += 3;
	}
}

void ifgt(){
	//if value is greater than 0, branch to instruction at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2)
	int32_t value = popOperand();
	int32_t branchOffset = calculateOffset();
	if (value > 0)
	{
		currentFrame->pc = currentFrame->pc + branchOffset;
	} else {
		currentFrame->pc += 3;
	}
}

void ifle(){
	//if value is less or equal than 0, branch to instruction at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2)
	int32_t value = popOperand();
	int32_t branchOffset = calculateOffset();
	if (value <= 0)
	{
		currentFrame->pc = currentFrame->pc + branchOffset;
	} else {
		currentFrame->pc += 3;
	}
}

void if_icmpeq(){
	//if ints are equal, branch to instruction at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2)
	int32_t value1 = popOperand();
	int32_t value2 = popOperand();
	int32_t branchOffset = calculateOffset();
	if (value1 == value2 )
	{
		currentFrame->pc = currentFrame->pc + branchOffset;
	} else {
		currentFrame->pc += 3;
	}
}

void if_icmpne(){
	//if ints are not equal, branch to instruction at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2)
	int32_t value1 = popOperand();
	int32_t value2 = popOperand();
	int32_t branchOffset = calculateOffset();
	if (value1 != value2 )
	{
		currentFrame->pc = currentFrame->pc + branchOffset;
	} else {
		currentFrame->pc += 3;
	}
}

void if_icmplt(){
	//if value1 are less than value2, branch to instruction at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2)
	int32_t value1 = popOperand();
	int32_t value2 = popOperand();
	int32_t branchOffset = calculateOffset();
	if (value1 < value2 )
	{
		currentFrame->pc = currentFrame->pc + branchOffset;
	} else {
		currentFrame->pc += 3;
	}
}

void if_icmpge(){
	//if value1 are greater or equal than value2, branch to instruction at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2)
	int32_t value1 = popOperand();
	int32_t value2 = popOperand();
	int32_t branchOffset = calculateOffset();
	if (value1 <= value2 )
	{
		currentFrame->pc = currentFrame->pc + branchOffset;
	} else {
		currentFrame->pc += 3;
	}
}

void if_icmpgt(){
	//if value1 are greater than value2, branch to instruction at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2)
	int32_t value1 = popOperand();
	int32_t value2 = popOperand();
	int32_t branchOffset = calculateOffset();
	if (value2 > value1 )
	{
		currentFrame->pc = currentFrame->pc + branchOffset;
	} else {
		currentFrame->pc += 3;
	}
}

void if_icmple(){
	//if value1 are less or equal than value2, branch to instruction at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2)
	int32_t value1 = popOperand();
	int32_t value2 = popOperand();
	int32_t branchOffset = calculateOffset();
	if (value2 <= value1) {
		currentFrame->pc = currentFrame->pc + branchOffset;
	} else {
		currentFrame->pc += 3;
	}
}

void if_acmpeq(){

}

void if_acmpne(){

}

void ins_goto(){
	int32_t branchOffset = calculateOffset();
	currentFrame->pc = currentFrame->pc + branchOffset;
}

void jsr(){
	//jump to subroutine at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2) and place the return address on the stack
	int32_t branchOffset = calculateOffset();
	int32_t returnAdress = currentFrame->pc+3;
	pushOperand(returnAdress);
	currentFrame->pc = currentFrame->pc + branchOffset;
}

void ret(){
	//continue execution from address taken from a local variable #index (the asymmetry with jsr is intentional)
	int32_t index = currentFrame->code[currentFrame->pc+1];
	int32_t offset = currentFrame->fields[index];
	currentFrame->pc = currentFrame->pc+offset;
	currentFrame->pc += 2;
}

void tableswitch() {
    int compValue = popOperand();

	uint8_t *src = currentFrame->code + currentFrame->pc + 1;
	TableswitchData dt = makeTableswitchData(src, currentFrame->pc);

	if(compValue >= dt.lowBytes && compValue <= dt.highBytes) {
		for(int i = 0; i < dt.sizeOfJumpOffsets; i++) {
			if(compValue == i) {
				currentFrame->pc += dt.jumpOffsets[i];
				return;
			}
		}
	}

	currentFrame->pc += dt.defaultBytes;
}

void lookupswitch() {
  int compValue = popOperand();

    uint8_t *src = currentFrame->code + currentFrame->pc + 1;
    LookupswitchData dt = makeLookupswitchData(src, currentFrame->pc);

    for(int i = 0; i <= dt.amountOfPairs; i += 2) {
        if(compValue == dt.keyOffsetPairs[i]) {
            currentFrame->pc += dt.keyOffsetPairs[i+1];
            return;
        }
    }

    currentFrame->pc += dt.defaultBytes;
}

void ireturn(){
	currentFrame->pc = currentFrame->code_length;
	returnFlag = 1;
}

void lreturn(){
	currentFrame->pc = currentFrame->code_length;
	returnFlag = 2;
}

void freturn(){
	currentFrame->pc = currentFrame->code_length;
	returnFlag = 1;
}

void dreturn(){
	currentFrame->pc = currentFrame->code_length;
	returnFlag = 2;
}

void areturn(){
	currentFrame->pc = currentFrame->code_length;
    returnFlag = 1;
}

void void_return(){
	currentFrame->pc = currentFrame->code_length;
	returnFlag = 0;
}

void getstatic(){
	currentFrame->pc+=3;
}

void putstatic(){
	//Acha indices para o constant pool
	uint8_t indexByte1 = currentFrame->code[currentFrame->pc+1];
	uint8_t indexByte2 = currentFrame->code[currentFrame->pc+2];

	//junta os dois para encontrar o indice desejado
	uint16_t index = (indexByte1 << 8) | indexByte2;

	int indexField = currentFrame->constantPool[index].info.fieldref_info->name_and_type_index;

	popOperand();

	currentFrame->pc +=3;
}

void getfield(){
	uint16_t index = read2Bytes((currentFrame->code + currentFrame->pc + 1));
	// get name and type for field index
	index = currentFrame->constantPool[index].info.fieldref_info->name_and_type_index;

	Object* object = (Object*) popOperand();

	char* descriptor = findMethodDescriptor(currentFrame->constantPool, index);
	uint64_t value = getObjectFieldValueByName(object, findMethodName(currentFrame->constantPool, index));

	switch(descriptor[0]){
		// variaveis normais
		case 'C': case 'F': case 'B': case 'I': case 'S': case 'Z': case 'L': case '[': {
			uint32_t aux = value & 0xffffffff;
			pushOperand(aux);
			break;
		}
		// variaveis categoria 2
		case 'J': case 'D':{
			uint32_t resultHigh;
			resultHigh = value >> 32;
			uint32_t resultLow;
			resultLow = value & 0xffffffff;
			//empilha resultado
			pushOperand(resultHigh);
			pushOperand(resultLow);
			break;
		}
	}

	currentFrame->pc += 3;
}

void putfield(){
	uint16_t index = read2Bytes((currentFrame->code + currentFrame->pc + 1));
	// get name and type for field index
	index = currentFrame->constantPool[index].info.fieldref_info->name_and_type_index;

	char* descriptor = findMethodDescriptor(currentFrame->constantPool, index);

	switch(descriptor[0]){
		// variaveis normais
		case 'C': case 'F': case 'B': case 'I': case 'S': case 'Z': case 'L': case '[': {
			uint32_t value = popOperand();
			Object* object = (Object*) popOperand();
			setObjectFieldValueByName(object, findMethodName(currentFrame->constantPool, index), value);
			break;
		}
		// variaveis categoria 2
		case 'J': case 'D': {
			uint32_t resultLow = popOperand();
			uint32_t resultHigh = popOperand();
			Object* object = (Object*) popOperand();
			uint64_t aux = resultHigh;
			aux <<= 32;
			aux += resultLow;
			setObjectFieldValueByName(object, findMethodName(currentFrame->constantPool, index), aux);
			break;
		}
	}
	currentFrame->pc += 3;
}


void invokevirtual(){
	int i;
	uint16_t index = read2Bytes((currentFrame->code + currentFrame->pc + 1));
	//pega o nome da classe
	char* className = findClassNameFromMethod(currentFrame->constantPool, index);

	int32_t nameAndTypeIndex = currentFrame->constantPool[index].info.methodref_info->name_and_type_index;
	char* methodName = findMethodName(currentFrame->constantPool, nameAndTypeIndex);
	char* methodDescriptor = findMethodDescriptor(currentFrame->constantPool, nameAndTypeIndex);
	if((strcmp(className, "java/io/PrintStream") == 0) && (strcmp(methodName,"println") == 0)) {
		if (DEBUG) printf("SYSTEM OUT : ");
		if(strcmp(methodDescriptor,"()V") == 0) {
			printf("\n");
		} else {
			if (methodDescriptor[1] == 'I') {
				handlePrintInt();
			} else if (methodDescriptor[1] == 'F') {
				handlePrintFloat();
			} else if (methodDescriptor[1] == 'Z') {
				handlePrintBoolean();
			} else if (methodDescriptor[1] == 'D') {
				handlePrintDouble();
			} else if(methodDescriptor[1] == 'C') {
				handlePrintChar();
			} else if(methodDescriptor[1] == 'J') {
				handlePrintLong();
			} else {
				handlePrintString();
			}
		}
	} else {
		// Calcula quantidade total de parametros na pilha
		int32_t paramsCount = getParamsCount(methodDescriptor);
		// Armazena os argumentos da pilha em um Array
		uint32_t fieldsArray[paramsCount+1];
		for(i = 0; i < paramsCount; fieldsArray[paramsCount-(i++)] = popOperand());
		Object* object = (Object*)popOperand();
		fieldsArray[0] = (uint32_t) object;
		// Retorna um estrutura de metodo do objeto para criar um frame
		ObjectMethod method = getObjectMethodByName(object, methodName, className);
		ClassFile* classFile = method.classFile;
		Method_info* method_info = method.method_info;
		pushMethod(classFile, method_info);
		// Copia os argumentos para as variaveis locais do novo frame
		for (int i = 0; i <= paramsCount; ++i){
			currentFrame->fields[i] = fieldsArray[i];
		}
		runFrame();
	}
	currentFrame->pc += 3;
}

void invokespecial(){
	uint16_t index = read2Bytes((currentFrame->code + currentFrame->pc + 1));
	//pega o nome da classe
	char* className = findClassNameFromMethod(currentFrame->constantPool, index);
	int32_t nameAndTypeIndex = currentFrame->constantPool[index].info.methodref_info->name_and_type_index;
	char* methodName = findMethodName(currentFrame->constantPool, nameAndTypeIndex);
	char* methodDescriptor = findMethodDescriptor(currentFrame->constantPool, nameAndTypeIndex);
	// Calcula quantidade total de parametros na pilha
	int32_t paramsCount = getParamsCount(methodDescriptor);
	// Armazena os argumentos da pilha em um Array
	uint32_t fieldsArray[paramsCount+1];
	for(int i = 0; i < paramsCount; fieldsArray[paramsCount-(i++)] = popOperand());
	Object* object = (Object*)popOperand();
	fieldsArray[0] = (uint32_t) object;
	// Retorna um estrutura de metodo do objeto para criar um frame
	ObjectMethod method = getObjectMethodByName(object, methodName, className);
	ClassFile* classFile = method.classFile;
	Method_info* method_info = method.method_info;
	pushMethod(classFile, method_info);
	// Copia os argumentos para as variaveis locais do novo frame
	for (int i = 0; i <= paramsCount; ++i){
		currentFrame->fields[i] = fieldsArray[i];
	}
	runFrame();
	currentFrame->pc += 3;
}

void invokestatic(){
	int i;
	uint16_t index = read2Bytes((currentFrame->code + currentFrame->pc + 1));
	//pega o nome da classe
	char* className = findClassNameFromMethod(currentFrame->constantPool, index);

	int32_t nameAndTypeIndex = currentFrame->constantPool[index].info.methodref_info->name_and_type_index;

	ClassFile* classFile = loadClass(className);
	Method_info* invokedMethod = findMethod(classFile, currentFrame->classe,nameAndTypeIndex);
	int32_t paramsCount = getParamsCount(classFile->constant_pool[invokedMethod->descriptor_index].info.utf8_info->bytes);
	uint32_t fieldsArray[paramsCount];

	for(i = 0; i < paramsCount; fieldsArray[i++] = popOperand());

	pushMethod(classFile, invokedMethod);
	for(i = 0; i < paramsCount; i++) {
		currentFrame->fields[i] = fieldsArray[paramsCount - i - 1];
	}
	runFrame();

	currentFrame->pc += 3;
}

void invokeinterface(){
	uint16_t index = read2Bytes((currentFrame->code + currentFrame->pc + 1));
	//pega o nome da classe
	char* className = findClassNameFromMethod(currentFrame->constantPool, index);
	int32_t nameAndTypeIndex = currentFrame->constantPool[index].info.methodref_info->name_and_type_index;
	char* methodName = findMethodName(currentFrame->constantPool, nameAndTypeIndex);
	char* methodDescriptor = findMethodDescriptor(currentFrame->constantPool, nameAndTypeIndex);
	// Calcula quantidade total de parametros na pilha
	int32_t paramsCount = getParamsCount(methodDescriptor);
	// Armazena os argumentos da pilha em um Array
	uint32_t fieldsArray[paramsCount+1];
	for(int i = 0; i < paramsCount; fieldsArray[paramsCount-(i++)] = popOperand());
	Object* object = (Object*)popOperand();
	fieldsArray[0] = (uint32_t) object;
	// Retorna um estrutura de metodo do objeto para criar um frame
	ObjectMethod method = getObjectMethodByName(object, methodName, className);
	ClassFile* classFile = method.classFile;
	Method_info* method_info = method.method_info;
	pushMethod(classFile, method_info);
	// Copia os argumentos para as variaveis locais do novo frame
	for (int i = 0; i <= paramsCount; ++i){
		currentFrame->fields[i] = fieldsArray[i];
	}
	runFrame();
	currentFrame->pc += 5;
}

void ins_new(){
	uint16_t index = currentFrame->code[currentFrame->pc + 1];
	// shifta pq sao 2 bytes de index
	index <<= 8;
	index += currentFrame->code[currentFrame->pc + 2];

	index = currentFrame->constantPool[index].info.class_info->name_index;

	ClassFile* classFile = loadClass(currentFrame->constantPool[index].info.utf8_info->bytes);
	Object* object = createObject(classFile);
	pushOperand((int32_t) object);

	currentFrame->pc += 3;
}

void newarray(){
	//instrucao que cria um novo array e coloca a referencia para a mesma na pilha

	//Pega o parametro que define o tipo
	uint32_t type = currentFrame->code[currentFrame->pc + 1];
	//Numero de elementos para o array
	uint32_t count = popOperand();

	//variavel para salvar o tamanho de cada elemento do array
	uint16_t typeSize = 0;

	//Define o tamanho do tipo
	switch(type){
		case 4 : //boolean
			typeSize = 1;
		break;
		case 5 : //char
			typeSize = 2;
		break;
		case 6 : //float
			typeSize = 4;
		break;
		case 7 : //double
			typeSize = 8;
		break;
		case 8 : //Byte
			typeSize = 1;
		break;
		case 9 : //Short
			typeSize = 2;
		break;
		case 10 : //int
			typeSize = 4;
		break;
		case 11 : //Longyy
			typeSize = 8;
		break;
	}

	//Realiza a alocacao

	// Coloca o tamanho
	arrayType* array;
	array = (arrayType *) malloc(sizeof(arrayType));
	putArraySize(count, array);

	// Aloca o espaco de dados
	putArrayReference(calloc(count, typeSize), array);

	// Coloca a referencia na pilha de operandos
    int32_t arrayTypeRef;
    memcpy(&arrayTypeRef, &array , sizeof(int32_t));
	pushOperand((uint32_t)array);
	//Incrementa o PC
	currentFrame->pc += 2;
}

void anewarray(){

	//retira da pilha o valor que vai corresponder ao tamanho do array a ser criado
	uint32_t count = popOperand();

	//Acha indices para o constant pool
	uint8_t indexByte1 = currentFrame->code[currentFrame->pc+1];
	uint8_t indexByte2 = currentFrame->code[currentFrame->pc+2];

	//junta os dois para encontrar o indice desejado
	uint16_t index = (indexByte1 << 8) | indexByte2;

	//TODO definir que tipo o array vai ser e pegar o tamanho desse tipo para a alocacao
	//Na descricao eh dito para acessar o constant pool na posicao index e verificar se eh uma
	//classe, array ou interface.
	uint16_t sizeBytes = sizeof(currentFrame->constantPool[index]);

	// Aloca o array

	// Coloca o tamanho
	arrayType* array;
	array = (arrayType *) malloc(sizeof(arrayType));
	putArraySize(count, array);

	// Aloca o espaco de dados
	putArrayReference(calloc(count, sizeBytes), array);

	// Coloca a referencia na pilha de operandos
	pushOperand((uint32_t)array);

	//Atualiza o pc
	currentFrame->pc+=3;
}

void arraylength(){
	//Encontra o tamanho do array que está na pilha

	//Pega a referecia para o array.
	arrayType* array = (arrayType*)popOperand();

	uint32_t size = getArraySize(array);

	// Coloca o tamanho na pilha
	pushOperand(size);

	// // Atualiza o PC
	currentFrame->pc++;
}

void checkcast(){
}

void instanceof(){
}

void wide(){
}

void multianewarray(){
	//Acha o numero de dimensoes
	uint8_t dimensions = currentFrame->code[currentFrame->pc+3];

	//cria um array para armazenar os valores do tamanho das dimencoes
	uint32_t count[dimensions + 1];

	//pega os counts (tamanho da dimensao) correspondente ao numero de dimencoes
	for (int i = dimensions; i > 0; --i){
		//retira da pilha o valor que vai corresponder ao tamanho do array a ser criado
		count[i] = popOperand();
	}

	//Acha indices para o constant pool
	uint8_t indexByte1 = currentFrame->code[currentFrame->pc+1];
	uint8_t indexByte2 = currentFrame->code[currentFrame->pc+2];

	//junta os dois para encontrar o indice desejado
	uint16_t index = (indexByte1 << 8) | indexByte2;

	//Tamanho de cada elemento
	uint16_t sizeBytes = 0;

	//pega o indice para o utf8
	index = currentFrame->constantPool[index].info.string_info->string_index;
	//acha a descricao do tipo
	uint8_t* bytes = currentFrame->constantPool[index].info.utf8_info->bytes;

	//boOlean
	if(strstr(bytes, "Z") != NULL) sizeBytes = 1;
	//char
	if(strstr(bytes, "C") != NULL) sizeBytes = 2;
	//float
	if(strstr(bytes, "F") != NULL) sizeBytes = 4;
	//double
	if(strstr(bytes, "D") != NULL) sizeBytes = 8;
	//Byte
	if(strstr(bytes, "B") != NULL) sizeBytes = 1;
	//Short
	if(strstr(bytes, "S") != NULL) sizeBytes = 2;
	//int
	if(strstr(bytes, "I") != NULL) sizeBytes = 4;
    //Long
	if(strstr(bytes, "J") != NULL) sizeBytes = 8;


	// Aloca o array multidimencoes
	//Aloca o array de ponteiros
	uint32_t *mArrayRef = (uint32_t *)calloc(dimensions, sizeof(uint32_t*));

	// Aloca o corpo do array multidimensoes
	for(int i = 0; i < dimensions; i++){
		if(count[i+1]){
			mArrayRef[i] = (uint32_t )calloc(count[i+1], sizeBytes);
		}else{ //caso o count seja 0 nenhuma nova dimencao eh alocada
			break;
		}
	}

	// Coloca o tamanho
	arrayType* array;
	array = (arrayType *) malloc(sizeof(arrayType));
	putArraySize(dimensions, array);

	// Aloca o espaco de dados
	putArrayReference(mArrayRef, array);

	// Coloca a referencia na pilha de operandos
	pushOperand((uint32_t)array);

	//Atualiza o pc
	currentFrame->pc+=3;
}

void ifnull(){
	//if value is null, branch to instruction at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2)
	int32_t offset = calculateOffset();
	int32_t value = popOperand();
	if(value == 0){
		currentFrame->pc = currentFrame->pc + offset;
	} else{
		currentFrame->pc++;
	}
}

void ifnonnull(){
	//if value is not null, branch to instruction at branchoffset (signed short constructed from unsigned bytes branchbyte1 << 8 + branchbyte2)
	int32_t offset = calculateOffset();
	int32_t value = popOperand();
	if(value != 0){
		currentFrame->pc = currentFrame->pc + offset;
	} else{
		currentFrame->pc++;
	}
}

void goto_w(){

}

void jsr_w(){

}

int32_t calculateOffset(){
	//calcula offset para salto
	uint8_t branchOffset1 = currentFrame->code[currentFrame->pc + 1];
	uint8_t branchOffset2 = currentFrame->code[currentFrame->pc + 2];
	int16_t branchOffset = branchOffset1;
	branchOffset <<= 8;
	branchOffset += branchOffset2;
	return branchOffset;

}
