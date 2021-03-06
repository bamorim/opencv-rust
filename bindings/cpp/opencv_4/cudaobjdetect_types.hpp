template struct Result<bool>;
template struct Result<cv::HOGDescriptor::DescriptorStorageFormat>;
template struct Result<cv::Mat*>;
template struct Result<cv::Ptr<cv::cuda::CascadeClassifier>*>;
template struct Result<cv::Ptr<cv::cuda::HOG>*>;
template struct Result<cv::Size_<int>>;
template struct Result<double>;
template struct Result<int>;
template struct Result<std::vector<cv::Point_<int>>*>;
template struct Result<std::vector<cv::Rect_<int>>*>;
template struct Result<std::vector<double>*>;
template struct Result<unsigned long>;
extern "C" void cv_PtrOfCascadeClassifier_delete(cv::Ptr<cv::cuda::CascadeClassifier>* instance) {
	delete instance;
}

extern "C" cv::cuda::CascadeClassifier* cv_PtrOfCascadeClassifier_get_inner_ptr(cv::Ptr<cv::cuda::CascadeClassifier>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfHOG_delete(cv::Ptr<cv::cuda::HOG>* instance) {
	delete instance;
}

extern "C" cv::cuda::HOG* cv_PtrOfHOG_get_inner_ptr(cv::Ptr<cv::cuda::HOG>* instance) {
	return instance->get();
}

