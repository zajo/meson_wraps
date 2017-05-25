project('Maya-devkit','cpp')

if build_machine.system()=='darwin'
	maya_location = '/Applications/Autodesk/maya2017'
else
	error('Platform not supported (yet)')
endif
includes = include_directories(maya_location + '/include')

if build_machine.system()=='darwin'
	OpenMaya = declare_dependency( include_directories: includes, link_args: [ '-L'+maya_location+'/Maya.app/Contents/MacOS', '-lOpenMaya' ] )
	OpenMayaAnim = declare_dependency( include_directories: includes, link_args: [ '-L'+maya_location+'/Maya.app/Contents/MacOS', '-lOpenMayaAnim' ] )
	OpenMayaFX = declare_dependency( include_directories: includes, link_args: [ '-L'+maya_location+'/Maya.app/Contents/MacOS', '-lOpenMayaFX' ] )
	OpenMayaRender = declare_dependency( include_directories: includes, link_args: [ '-L'+maya_location+'/Maya.app/Contents/MacOS', '-lOpenMayaRender' ] )
	OpenMayaUI = declare_dependency( include_directories: includes, link_args: [ '-L'+maya_location+'/Maya.app/Contents/MacOS', '-lOpenMayaUI' ] )
	Foundation = declare_dependency( include_directories: includes, link_args: [ '-L'+maya_location+'/Maya.app/Contents/MacOS', '-lFoundation' ] )
elif
	error('System not supported yet')
endif
