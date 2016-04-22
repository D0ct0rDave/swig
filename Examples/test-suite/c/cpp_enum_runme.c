#include "cpp_enum/cpp_enum_wrap.h"
#include <assert.h>
#include <stdio.h>

int main(int argc, const char *argv[]) {

	// We don't have "enum SOME_ENUM"
	int e = ENUM_ONE, *p;

	// check the constructor's default value
	StructWithEnums *s = StructWithEnums_new();
	assert(StructWithEnums_some_enum_get(s) == ENUM_ONE);

	// check setter
	StructWithEnums_some_enum_set(s, ENUM_TWO);
	assert(StructWithEnums_some_enum_get(s) == ENUM_TWO);

	// check function call
	StructWithEnums_enum_test1(s, e, &e, &e);

	// check function call
	StructWithEnums_enum_test2(s, e, &e, &e);

	// check function call
	assert(StructWithEnums_enum_test3(s) == ENUM_ONE);

	// check function call
	assert(StructWithEnums_enum_test4(s) == ENUM_TWO);

	// check function call
	p = StructWithEnums_enum_test5(s);
	assert(*p == ENUM_TWO);

	// check function call
	p = StructWithEnums_enum_test6(s);
	assert(*p == ENUM_TWO);

	// check function call
	p = StructWithEnums_enum_test7(s);
	assert(*p == ENUM_TWO);

	// check function call
	p = StructWithEnums_enum_test8(s);
	assert(*p == ENUM_TWO);
	
	StructWithEnums_delete(s);

	Foo *f = Foo_new();

	// check the constructor's default value
	assert(Foo_hola_get(f) == Foo_Hello);

	Foo_hola_set(f, Foo_Hi);
	assert(Foo_hola_get(f) == Foo_Hi);

	Foo_delete(f);

	//check C enum
	hi = Hi;
	hi = Hello;

	// check typedef enum
	play_state t;

	t = PLAY;
	assert(t == 1);

	t = STOP;
	assert(t == 0);

	return 0;
}
