#pragma once
#include "corona.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	__declspec(selectany) corona corona_obj;
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ outbox;
	protected:
	private: System::Windows::Forms::Label^ title_label;
	private: System::Windows::Forms::Button^ open_image_btn;
	private: System::Windows::Forms::Button^ diff_btn;
	private: System::Windows::Forms::Button^ sim_btn;
	private: System::Windows::Forms::Button^ plot_btn;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ per_chart;



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->outbox = (gcnew System::Windows::Forms::TextBox());
			this->title_label = (gcnew System::Windows::Forms::Label());
			this->open_image_btn = (gcnew System::Windows::Forms::Button());
			this->diff_btn = (gcnew System::Windows::Forms::Button());
			this->sim_btn = (gcnew System::Windows::Forms::Button());
			this->plot_btn = (gcnew System::Windows::Forms::Button());
			this->per_chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->per_chart))->BeginInit();
			this->SuspendLayout();
			// 
			// outbox
			// 
			this->outbox->Location = System::Drawing::Point(42, 108);
			this->outbox->Multiline = true;
			this->outbox->Name = L"outbox";
			this->outbox->Size = System::Drawing::Size(622, 232);
			this->outbox->TabIndex = 0;
			// 
			// title_label
			// 
			this->title_label->AutoSize = true;
			this->title_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_label->Location = System::Drawing::Point(42, 25);
			this->title_label->Name = L"title_label";
			this->title_label->Size = System::Drawing::Size(565, 59);
			this->title_label->TabIndex = 1;
			this->title_label->Text = L"Corona Virus Analyzer";
			// 
			// open_image_btn
			// 
			this->open_image_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->open_image_btn->Location = System::Drawing::Point(777, 108);
			this->open_image_btn->Name = L"open_image_btn";
			this->open_image_btn->Size = System::Drawing::Size(286, 79);
			this->open_image_btn->TabIndex = 2;
			this->open_image_btn->Text = L"Open Image";
			this->open_image_btn->UseVisualStyleBackColor = true;
			this->open_image_btn->Click += gcnew System::EventHandler(this, &Form1::open_image_btn_Click);
			// 
			// diff_btn
			// 
			this->diff_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->diff_btn->Location = System::Drawing::Point(777, 236);
			this->diff_btn->Name = L"diff_btn";
			this->diff_btn->Size = System::Drawing::Size(286, 79);
			this->diff_btn->TabIndex = 3;
			this->diff_btn->Text = L"Show Difference";
			this->diff_btn->UseVisualStyleBackColor = true;
			this->diff_btn->Click += gcnew System::EventHandler(this, &Form1::diff_btn_Click);
			// 
			// sim_btn
			// 
			this->sim_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sim_btn->Location = System::Drawing::Point(777, 380);
			this->sim_btn->Name = L"sim_btn";
			this->sim_btn->Size = System::Drawing::Size(286, 79);
			this->sim_btn->TabIndex = 4;
			this->sim_btn->Text = L"Show Similarity";
			this->sim_btn->UseVisualStyleBackColor = true;
			this->sim_btn->Click += gcnew System::EventHandler(this, &Form1::sim_btn_Click);
			// 
			// plot_btn
			// 
			this->plot_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plot_btn->Location = System::Drawing::Point(777, 663);
			this->plot_btn->Name = L"plot_btn";
			this->plot_btn->Size = System::Drawing::Size(286, 79);
			this->plot_btn->TabIndex = 5;
			this->plot_btn->Text = L"Plot Graph";
			this->plot_btn->UseVisualStyleBackColor = true;
			this->plot_btn->Click += gcnew System::EventHandler(this, &Form1::plot_btn_Click);
			// 
			// per_chart
			// 
			chartArea1->AxisY->Maximum = 100;
			chartArea1->AxisY->Minimum = 80;
			chartArea1->Name = L"ChartArea1";
			this->per_chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->per_chart->Legends->Add(legend1);
			this->per_chart->Location = System::Drawing::Point(52, 415);
			this->per_chart->Name = L"per_chart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Percentage";
			this->per_chart->Series->Add(series1);
			this->per_chart->Size = System::Drawing::Size(612, 410);
			this->per_chart->TabIndex = 6;
			this->per_chart->Text = L"chart1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1123, 954);
			this->Controls->Add(this->per_chart);
			this->Controls->Add(this->plot_btn);
			this->Controls->Add(this->sim_btn);
			this->Controls->Add(this->diff_btn);
			this->Controls->Add(this->open_image_btn);
			this->Controls->Add(this->title_label);
			this->Controls->Add(this->outbox);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->per_chart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void open_image_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	corona_obj.in_c.open("meta_test.txt");
	if (corona_obj.in_c.is_open())
	{
		outbox->AppendText("Meta File Opened Succesfully");
	}
	else
	{
		outbox->AppendText("\r\nFailed To Open Meta File");
	}
	outbox->AppendText("\r\nReading Meta File");
	corona_obj.openfile(corona_obj.corona_file_names, corona_obj.in_c);
	for (int i = 0; i < corona_obj.corona_file_names.size(); i++)
	{
		string strmb = corona_obj.corona_file_names[i];
		string ist = to_string(i+1);
		System::String^ strm1b = gcnew System::String(strmb.c_str());
		System::String^ strmist = gcnew System::String(ist.c_str());
		outbox->AppendText("\r\nFile Path Number ");
		outbox->AppendText(strmist);
		outbox->AppendText(" = ");
		outbox->AppendText(strm1b);
		//cout << corona_obj.corona_file_names[i] << endl;

	}
	outbox->AppendText("\r\nSetting Count ");
	corona_obj.setcount(corona_obj.count1, corona_obj.count2, corona_obj.read_file_1, corona_obj.read_file_2);
	outbox->AppendText("\r\nPopulating Array ");
	corona_obj.open_arr(corona_obj.virus_arr_1, corona_obj.virus_arr_2, corona_obj.read_file_1, corona_obj.read_file_2, corona_obj.count1, corona_obj.count2);
	outbox->AppendText("\r\nOpening Images ");
	corona_obj.open_image(corona_obj.virus_image_1, corona_obj.virus_image_2, corona_obj.virus_arr_1, corona_obj.virus_arr_2, corona_obj.count1, corona_obj.count2);

}
private: System::Void diff_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	outbox->AppendText("\r\nShowing Substracted Image ");
	corona_obj.subt(corona_obj.virus_image_1, corona_obj.virus_image_2);
}
private: System::Void sim_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	outbox->AppendText("\r\nShowing Similarity Image ");
	corona_obj.sim(corona_obj.virus_image_1, corona_obj.virus_image_2);
}
private: System::Void plot_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	corona_obj.per_out();
	double percentage = corona_obj.compare_img(corona_obj.virus_image_1, corona_obj.virus_image_2);
	string strmp = to_string(percentage);
	System::String^ strm1p = gcnew System::String(strmp.c_str());
	outbox->AppendText("\r\n Curent Percentage = ");
	outbox->AppendText(strm1p);
	outbox->AppendText("%");

		string per = to_string(corona_obj.per_val[0]);
		System::String^ per1 = gcnew System::String(per.c_str());
		outbox->AppendText("\r\nPercentage Similarity of China - Italy = ");
		outbox->AppendText(per1);
		outbox->AppendText("%");	
		per = to_string(corona_obj.per_val[1]);
		per1 = gcnew System::String(per.c_str());
		outbox->AppendText("\r\nPercentage Similarity of China - Australia = ");
		outbox->AppendText(per1);
		outbox->AppendText("%");
		per = to_string(corona_obj.per_val[2]);
		per1 = gcnew System::String(per.c_str());
		outbox->AppendText("\r\nPercentage Similarity of Wuhan - China = ");
		outbox->AppendText(per1);
		outbox->AppendText("%");
		per = to_string(corona_obj.per_val[3]);
		per1 = gcnew System::String(per.c_str());
		outbox->AppendText("\r\nPercentage Similarity of Wuhan - Australia = ");
		outbox->AppendText(per1);
		outbox->AppendText("%");
		per = to_string(corona_obj.per_val[4]);
		per1 = gcnew System::String(per.c_str());
		outbox->AppendText("\r\nPercentage Similarity of Australia - Italy = ");
		outbox->AppendText(per1);
		outbox->AppendText("%");
	for (int i = 0; i < corona_obj.per_val.size(); i++)
		this->per_chart->Series["Percentage"]->Points->AddXY(i+1, corona_obj.per_val[i]);
}	

};
}
