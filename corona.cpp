#include "pch.h"
#include "corona.h"
string corona::getmeta()
{
	return meta_file_path;
}

void corona::openfile(vector <string>& file_names, ifstream& in)
{

	//for loop runs till the number of images mentioned at the start of the meta file

	string file_path;
	in >> file_path;
	//file names are read and stored
	file_names.push_back(file_path);
	in >> file_path;
	file_names.push_back(file_path);



}
void corona::setcount(int& count1, int& count2, ifstream& file1, ifstream& file2)
{
	file1.open(corona_file_names[0]);
	if (file1.is_open())
	{
		cout << "file 1 open" << endl;
	}
	else
	{
		cout << "failed to open file 1" << endl;
	}
	file2.open(corona_file_names[1]);
	if (file2.is_open())
	{
		cout << "file 2 open" << endl;
	}
	else
	{
		cout << "failed to open file 2" << endl;
	}
	while (file1)
	{
		char a;
		file1 >> a;
		count1++;
	}
	cout << "\ncount set1" << endl;
	cout << count1 << endl;

	while (file2)
	{
		char a;
		file2 >> a;
		count2++;
	}
	cout << "\ncount set2" << endl;
	cout << count2 << endl;
	int root1 = sqrt(count1);
	if (root1 * root1 < count1)
	{
		col1 = root1 + 1;
		row1 = root1 + 1;
	}
	else
	{
		col1 = root1;
		row1 = root1;
	}
	int root2 = sqrt(count2);
	if (root2 * root2 < count2)
	{
		col2 = root2 + 1;
		row2 = root2 + 1;
	}
	else
	{
		col2 = root2;
		row2 = root2;
	}
	file1.close();
	file2.close();
}


void corona::open_arr(int virus_arr_1[], int virus_arr_2[], ifstream& file1, ifstream& file2, int& count1, int& count2)
{
	file1.open(corona_file_names[0]);
	file2.open(corona_file_names[1]);
	char inp1, inp2;
	int i = 0;
	while (!file1.eof())
	{
		file1 >> inp1;
		switch (inp1)
		{
		case 'a':
		{
			virus_arr_1[i] = 1;
			break;
		}

		case 'c':
		{
			virus_arr_1[i] = 2;
			break;
		}
		case 't':
		{
			virus_arr_1[i] = 3;
			break;
		}
		case 'g':
		{
			virus_arr_1[i] = 4;
			break;
		}
		default:
			break;
		}
		i++;
	}
	i = 0;
	while (!file2.eof())
	{
		file2 >> inp2;
		switch (inp2)
		{
		case 'a':
		{
			virus_arr_2[i] = 1;
			break;
		}

		case 'c':
		{
			virus_arr_2[i] = 2;
			break;
		}
		case 't':
		{
			virus_arr_2[i] = 3;
			break;
		}
		case 'g':
		{
			virus_arr_2[i] = 4;
			break;
		}
		default:
			break;
		}
		i++;
	}
	file1.close();
	file2.close();
}
void corona::open_image(Mat& image_1, Mat& image_2, int virus_arr_1[], int virus_arr_2[], int count1, int count2)
{
	image_1 = Mat::zeros(row1, col1, CV_8UC3);
	image_2 = Mat::zeros(row2, col2, CV_8UC3);
	cout << "\nrow1 = " << row1 << endl;
	cout << "col1 = " << col1 << endl;
	cout << "row2 = " << row2 << endl;
	cout << "col2 = " << col2 << endl;
	int inc = 0;
	while (inc < count1)
	{
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < col1; j++)
			{
				Vec3b color_s = image_1.at<Vec3b>(Point(i, j));
				if (virus_arr_1[inc] == 1)
				{
					color_s.val[0] = 255;
					color_s.val[1] = 0;
					color_s.val[2] = 0;
					image_1.at<Vec3b>(Point(i, j)) = color_s;
				}
				else if (virus_arr_1[inc] == 2)
				{
					color_s.val[0] = 0;
					color_s.val[1] = 255;
					color_s.val[2] = 0;
					image_1.at<Vec3b>(Point(i, j)) = color_s;
				}
				else if (virus_arr_1[inc] == 3)
				{
					color_s.val[0] = 0;
					color_s.val[1] = 0;
					color_s.val[2] = 255;
					image_1.at<Vec3b>(Point(i, j)) = color_s;
				}
				else if (virus_arr_1[inc] == 4)
				{
					color_s.val[0] = 0;
					color_s.val[1] = 255;
					color_s.val[2] = 255;
					image_1.at<Vec3b>(Point(i, j)) = color_s;
				}
				else
				{
					color_s.val[0] = 0;
					color_s.val[1] = 0;
					color_s.val[2] = 0;

				}
				inc++;
			}
		}
	}
	inc = 0;
	while (inc < count2)
	{
		for (int i = 0; i < row2; i++)
		{
			for (int j = 0; j < col2; j++)
			{
				Vec3b color_s = image_2.at<Vec3b>(Point(i, j));
				if (virus_arr_2[inc] == 1)
				{
					color_s.val[0] = 255;
					color_s.val[1] = 0;
					color_s.val[2] = 0;
					image_2.at<Vec3b>(Point(i, j)) = color_s;
				}
				else if (virus_arr_2[inc] == 2)
				{
					color_s.val[0] = 0;
					color_s.val[1] = 255;
					color_s.val[2] = 0;
					image_2.at<Vec3b>(Point(i, j)) = color_s;
				}
				else if (virus_arr_2[inc] == 3)
				{
					color_s.val[0] = 0;
					color_s.val[1] = 0;
					color_s.val[2] = 255;
					image_2.at<Vec3b>(Point(i, j)) = color_s;
				}
				else if (virus_arr_2[inc] == 4)
				{
					color_s.val[0] = 0;
					color_s.val[1] = 255;
					color_s.val[2] = 255;
					image_2.at<Vec3b>(Point(i, j)) = color_s;
				}
				else
				{
					color_s.val[0] = 0;
					color_s.val[1] = 0;
					color_s.val[2] = 0;

				}
				inc++;
			}
		}
	}
	cv::namedWindow("Image_1");
	cv::namedWindow("Image_2");
	cv::resizeWindow("Image_1", 600, 600);
	cv::resizeWindow("Image_2", 600, 600);
	cv::imshow("Image_1", image_1);
	cv::imshow("Image_2", image_2);
	cv::waitKey(0);

}

double corona::compare_img(Mat& image_1, Mat& image_2)
{
	Mat m_flat_1 = image_1.reshape(1, 1);
	Mat m_flat_2 = image_2.reshape(1, 1);
	int count = 0;
	int limit_i = (m_flat_1.cols / 3) - 10;
	int limit_j = (m_flat_2.cols / 3) - 10;
	double divide = 0;
	cout << limit_i << endl;
	cout << limit_j << endl;
	for (int i = 0; i < limit_i; i = i + 10)
	{
		divide++;
		for (int j = 0; j < limit_j; j = j + 10)
		{
			bool equal = 1;
			for (int c = 0; c < 10; c++)
			{
				//cout <<endl<< i << " " << j;
				if (m_flat_1.at<Vec3b>(Point(i + c, 0)) != m_flat_2.at<Vec3b>(Point(j + c, 0)))
				{
					equal = 0;
				}

			}
			if (equal)
			{
				count++;
				cout << endl << " Count = " << count;
				break;
			}
		}
	}
	cout << endl << "Count = " << count;
	cout << endl << "Divide = " << divide;
	cout << endl << "Percentage = " << (count / divide) * 100 << "%";
	return (count / divide) * 100;
}
void corona::subt(Mat& image_1, Mat& image_2)
{
	Mat subt = image_1 - image_2;
	cv::imshow("Subtracted Image", subt);
	cv::waitKey(0);

}
void corona::sim(Mat& image_1, Mat& image_2)
{
	Mat siml = Mat::zeros(row1, col1, CV_8UC3);
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			Vec3b color_s = image_1.at<Vec3b>(Point(i, j));

			if (image_1.at<Vec3b>(Point(i, j)) == image_2.at<Vec3b>(Point(i, j)))
			{
				color_s.val[0] = 255;
				color_s.val[1] = 255;
				color_s.val[2] = 255;
				siml.at<Vec3b>(Point(i, j)) = color_s;
			}
			else
			{
				color_s.val[0] = 0;
				color_s.val[1] = 0;
				color_s.val[2] = 0;
				siml.at<Vec3b>(Point(i, j)) = color_s;
			}

		}
	}
	cv::imshow("Similarity Image", siml);
	cv::waitKey(0);

}
void corona::per_out()
{
	ifstream per_in;
	per_in.open("per_dat.txt");
	if (per_in.is_open())
	{
		cout << endl << "percentage file open" << endl;
	}
	else
	{
		cout << "failed to open" << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		double val;
		per_in >> val;
		per_val.push_back(val);
	}
	for (int i = 0; i < per_val.size(); i++)
	{
		cout << endl << per_val[i];
	}


}