project('test','cpp')

compiler = meson.get_compiler('cpp')
compiler_id = compiler.get_id()

if not meson.is_subproject()
	if compiler_id=='clang'
		add_global_arguments(
			'-Wno-implicit-function-declaration',
			language:'c' )
	elif compiler_id=='gcc'
		add_global_arguments(
			'-Wno-implicit-function-declaration',
			language:'c' )
	endif
endif

test('tester', executable('exe','test.cpp',dependencies: [ subproject('libpng').get_variable('all') ] ) )
