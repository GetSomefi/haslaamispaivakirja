#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Targets/Android/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" .
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.haslaamispaivakirja"
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "com.apps.haslaamispaivakirja"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "Häsläämispäiväkirja.apk" \
    --package=com.apps.haslaamispaivakirja \
    --activity=Haslaamispaivakirja \
    --sym-dir="app/src/main/.uno" \
    "$@"
