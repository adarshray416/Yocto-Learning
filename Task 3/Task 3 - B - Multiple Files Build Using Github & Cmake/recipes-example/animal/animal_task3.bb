DESCRIPTION = "A friendly program for multiple sources codes example"
PRIORITY = "optional"
SECTION = "examples"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"
SRCREV = "${AUTOREV}"
SRC_URI = "git://github.com/adarshray416/Yocto-Learning.git;branch=main2"
S = "${WORKDIR}/git"

inherit cmake
