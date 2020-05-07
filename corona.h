#pragma once
#include "pch.h"
#include<string>
#include<vector>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include<iostream>
#include<fstream>
using namespace std;
using namespace cv;
class corona
{
public:
	string getmeta();
	void openfile(vector <string>& corona_file_names, ifstream& in);
	ifstream in_c;
	ifstream read_file_1;
	ifstream read_file_2;
	int count1 = 0, count2 = 0;
	//string corona_file_names[2];
	vector <string>corona_file_names;
	vector <double>per_val;
	int virus_arr_1[50000];
	int virus_arr_2[50000];
	Mat virus_image_1;
	Mat virus_image_2;
	int row1, col1, row2, col2;
	void setcount(int& count1, int& count2, ifstream& file1, ifstream& file2);
	void open_arr(int virus_arr_1[], int virus_arr_2[], ifstream& file1, ifstream& file2, int& count1, int& count2);
	void open_image(Mat& image_1, Mat& image_2, int virus_arr_1[], int virus_arr_2[], int count1, int count2);
	double compare_img(Mat& image_1, Mat& image_2);
	void subt(Mat& image_1, Mat& image_2);
	void sim(Mat& image_1, Mat& image_2);
	void per_out();

private:
	string meta_file_path = "meta_test.txt";
	int corona_file_count;



};

