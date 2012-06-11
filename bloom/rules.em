#! /usr/bin/make -f
# Uncomment this to turn on verbose mode.
export DH_VERBOSE=1
export DH_OPTIONS=-v

%:
	dh  $@@

override_dh_auto_configure:
	dh_auto_configure -- \
		--prefix="@(INSTALL_PREFIX)"

override_dh_auto_test:
	echo -- Running tests. Even if one of them fails the build is not canceled.
	dh_auto_test || true

override_dh_installdocs:
	dh_installdoc || true
