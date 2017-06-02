project('test','cpp')
maya = subproject('Maya-devkit')
test('tester', executable('exe','test.cpp',dependencies: [ maya.get_variable('Foundation') ] ), env: maya.get_variable('test_environment') )
