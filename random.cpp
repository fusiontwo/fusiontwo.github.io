#define SEED 17
int MULT = 25173; // 전역 변수
int INC = 13849; // 전역 변수
int MOD = 65536; // 전역 변수

static unsigned int seed = SEED; // 난수 생성 시드값 (정적 전역 변수)

// 정수 난수 생성 함수
unsigned random_i(void)
{
	seed = (MULT * seed + INC) % MOD; // 난수의 시드값 설정
	return seed;
}
// 실수 난수 생성 함수
double random_f(void)
{
	seed = (MULT * seed + INC) % MOD; // 난수의 시드값 설정
	return seed;
}

