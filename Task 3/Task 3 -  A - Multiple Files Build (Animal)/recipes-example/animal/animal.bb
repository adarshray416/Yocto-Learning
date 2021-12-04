DESCRIPTION = "A friendly program for multiple sources codes example"
PRIORITY = "optional"
SECTION = "examples"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"
SRCREV = "${AUTOREV}"
require animal.inc

S = "${WORKDIR}"

do_compile() {
${CXX} ${CFLAGS} ${LDFLAGS} main.cpp dog.cpp animal.cpp -o animal
}
do_install() {
install -d ${D}${bindir}
install -m 0755 animal ${D}${bindir}
}
