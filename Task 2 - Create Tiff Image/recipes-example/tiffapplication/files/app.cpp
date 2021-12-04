#include <stdio.h>
#include <string.h>
#include <tiffio.h>



#include <iostream>



int main() {



int width = 64;
int height = 64;



uint32* buffer = (uint32 *)malloc(width*height * sizeof(uint32));
uint32* scan_line;



//---------------writing part------------------



TIFF *image = TIFFOpen("input2.tif", "w");
TIFFSetField(image, TIFFTAG_IMAGEWIDTH, width);
TIFFSetField(image, TIFFTAG_IMAGELENGTH, height);
TIFFSetField(image, TIFFTAG_BITSPERSAMPLE, 32);
TIFFSetField(image, TIFFTAG_SAMPLESPERPIXEL, 1);
TIFFSetField(image, TIFFTAG_ROWSPERSTRIP, 1);
TIFFSetField(image, TIFFTAG_ORIENTATION, ORIENTATION_TOPLEFT);
TIFFSetField(image, TIFFTAG_PLANARCONFIG, PLANARCONFIG_CONTIG);
TIFFSetField(image, TIFFTAG_PHOTOMETRIC, PHOTOMETRIC_MINISBLACK);
TIFFSetField(image, TIFFTAG_SAMPLEFORMAT, SAMPLEFORMAT_UINT);
TIFFSetField(image, TIFFTAG_COMPRESSION, COMPRESSION_NONE);



scan_line = (uint32 *)malloc(width*(sizeof(uint32)));



for (int i = 0; i < height; i++) {



memcpy(scan_line, &buffer[i*width], width * sizeof(uint32));
TIFFWriteScanline(image, scan_line, i, 0);
}



TIFFClose(image);
free(buffer);
free(scan_line);



return 0;



}
