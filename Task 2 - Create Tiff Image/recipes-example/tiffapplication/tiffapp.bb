DESCRIPTION = "A friendly program that creates tiff image"
PRIORITY = "optional"
SECTION = "examples"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"
SRC_URI = "file://app.cpp"
S = "${WORKDIR}"
DEPENDS = "tiff"
do_compile() {

${CXX} ${CFLAGS} ${LDFLAGS} app.cpp -o tiffapp -ltiff
}
do_install() {
install -d ${D}${bindir}
install -m 0755 tiffapp ${D}${bindir}
}
