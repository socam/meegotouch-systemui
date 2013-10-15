include(../shared.pri)

# Stupid qmake wants to link everything.
QMAKE_LINK = @: IGNORE THIS LINE

QMAKE_EXTRA_TARGETS += doc
MAKE_EXTRA_COMPILER += doc

doc.target        = html/index.html
doc.config       += no_check_exist no_link explicit_dependencies
doc.commands      = doxygen mdoxy.cfg
doc.input         = $${doc.depends}
doc.output        = $${doc.target}

## Make are doc target build by default If 'make' is executed in doc folder
PRE_TARGETDEPS += $${doc.output}


# Install rules

htmldocs.files = ./html/*
htmldocs.path = /usr/share/doc/system-ui/html/
htmldocs.CONFIG += no_check_exist

INSTALLS += htmldocs   
