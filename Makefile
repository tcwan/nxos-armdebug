# Top level makefile

# Rebuild last built appkernel
all:
	scons -C nxos
	
clean:
	scons -c -u -C nxos
	
# Build specific appkernel. Name of folder is specified without path
# e.g. make armskel
%:
	echo "Building $@"
	scons -C nxos appkernels=$@