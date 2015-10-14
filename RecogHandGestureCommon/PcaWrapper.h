/*******************************************************************************
* Copyright (c) 2015 IBM Corporation
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*******************************************************************************/

#ifndef __RECOG_HAND_GESTURE_COMMON_PCA_WRAPPER__
#define __RECOG_HAND_GESTURE_COMMON_PCA_WRAPPER__

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class PcaWrapper
{
public:
	PcaWrapper();
	PcaWrapper(const cv::Mat &pcaTrainFeatures, int dimPCA);
	~PcaWrapper();

    void write(FileStorage& fs) const;
    void read(const FileNode& node);

	cv::Mat calcPcaProject(const cv::Mat &descriptors);

private:
	int mDimPCA;

	cv::PCA *pca;
};

#endif __RECOG_HAND_GESTURE_COMMON_FISHER_VECTOR_WRAPPER__