#include <iostream>
#include <string>

#include <CImg.h>

void showImage(void)
{
    std::cout << "run CImg hello world..." << std::endl;
    cimg_library::CImg<unsigned char> img;
    std::string strFile = "lena.pgm";

    img = cimg_library::CImg<unsigned char>(strFile.c_str());
    std::cout << "load " << strFile << "..." << std::endl;
    std::cout << "width = " << img.width() << std::endl;
    std::cout << "height = " << img.height() << std::endl;
    std::cout << "color = " << img.spectrum() << std::endl;

    img.display("Input image");
}

void testZlib(void)
{
    std::string strFilePgm = "lena.pgm";
    std::string strFileZlibUncmp = "lenaUncompressed.cimgz";
    std::string strFileZlibCmp = "lenaCompressed.cimgz";
    std::string strFileJpg = "lena.jpg";

    /// load PGM image
    cimg_library::CImg<unsigned char> imgPgm(strFilePgm.c_str());
    /// save uncompressed/compressed image as .cimgz
    imgPgm.save_cimg(strFileZlibUncmp.c_str());
    imgPgm.save_cimg(strFileZlibCmp.c_str(), true);

    /// load cimgz image
    cimg_library::CImg<unsigned char> imgZlib;
    imgZlib.load_cimg(strFileZlibCmp.c_str());

    /// save as jpeg image
    imgZlib.save_jpeg(strFileJpg.c_str());
}

int main()
{
    showImage();
    testZlib();
    return 0;
}
