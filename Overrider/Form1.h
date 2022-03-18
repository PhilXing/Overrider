#pragma once

namespace Overrider {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Media;
	using namespace Microsoft::Win32;
	using namespace OverrideDescriptor;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			RestoreSettings();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  labelProjectOverrideList;





	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;

	private: System::Windows::Forms::Label^  labelReferenceOverrideList;

	private: System::Windows::Forms::TextBox^  textBoxTagNumber;

	private: System::Windows::Forms::GroupBox^  groupBoxProject;
	private: System::Windows::Forms::TextBox^  textBoxHistoryC;
	private: System::Windows::Forms::GroupBox^  groupBoxReference;

	private: System::Windows::Forms::ComboBox^  comboBoxResult;

	private: System::Windows::Forms::Label^  labelProjectProjectOverrideList2;

	private: System::Windows::Forms::Label^  labelHistoryC;
	private: System::Windows::Forms::Label^  labelResult;

	private: System::Windows::Forms::CheckedListBox^  checkedListBoxAdded;
	private: System::Windows::Forms::CheckedListBox^  checkedListBoxDeleted;
	private: System::Windows::Forms::TabControl^  tabControl1;

	private: System::Windows::Forms::TabPage^  tabPageControl;
	private: System::Windows::Forms::TabPage^  tabPageAdded;
	private: System::Windows::Forms::TabPage^  tabPageDeleted;
	private: System::Windows::Forms::TabPage^  tabPageModified;
	private: System::Windows::Forms::CheckedListBox^  checkedListBoxModified;

	private: System::Windows::Forms::Button^  buttonCopyAdded;

	private: System::Windows::Forms::Button^  buttonNoneAdded;

	private: System::Windows::Forms::Button^  buttonAllAdded;
	private: System::Windows::Forms::Button^  buttonDelete;
	private: System::Windows::Forms::Button^  buttonNoneDeleted;
	private: System::Windows::Forms::Button^  buttonAllDeleted;
	private: System::Windows::Forms::Button^  buttonCopyModified;

	private: System::Windows::Forms::Button^  buttonNoneModified;
	private: System::Windows::Forms::Button^  buttonAllModified;

	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabelCount;
	private: System::Windows::Forms::Button^  buttonAnalysis;
	private: System::Windows::Forms::Button^  buttonBatch;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;

	private: System::Windows::Forms::Label^  labelReferenceProjectOverrideList2;

	private: System::Windows::Forms::Label^  labelProjectProject;



	private: System::Windows::Forms::Label^  labelReferenceProject;


	private: System::Windows::Forms::CheckBox^  checkBoxModified;

	private: System::Windows::Forms::CheckBox^  checkBoxDeleted;
	private: System::Windows::Forms::CheckBox^  checkBoxAdded;

	private: System::Windows::Forms::Button^  buttonOverriddenModified;

	private: System::Windows::Forms::TabPage^  tabPageIssues;
	private: System::Windows::Forms::ListBox^  listBoxIssue;

	private: System::Windows::Forms::TextBox^  textBoxProjectProjectOverrideList2;
	private: System::Windows::Forms::TextBox^  textBoxProjectOverrideList;


	private: System::Windows::Forms::TextBox^  textBoxReferenceProjectOverrideList2;

	private: System::Windows::Forms::TextBox^  textBoxReferenceOverrideList;

	private: System::Windows::Forms::ComboBox^  comboBoxProjectProject;
	private: System::Windows::Forms::ComboBox^  comboBoxReferenceProject;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPageLog;
	private: System::Windows::Forms::TextBox^  textBoxLog;
	private: System::Windows::Forms::Button^  buttonOverriddenAdded;

	private: System::Windows::Forms::Button^  buttonOverriddenDeleted;

	private: System::Windows::Forms::SplitContainer^  splitContainer2;

	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::TextBox^  textBoxIssueNumber;
	private: System::Windows::Forms::RadioButton^  radioButtonTag;
	private: System::Windows::Forms::RadioButton^  radioButtonIssue;
	private: System::Windows::Forms::Label^  labelHistoryK;
	private: System::Windows::Forms::TextBox^  textBoxHistoryK;

	private: System::Windows::Forms::TabPage^  tabPageOverridden;
	private: System::Windows::Forms::TabPage^  tabPageProject;
	private: System::Windows::Forms::TabPage^  tabPageReference;
	private: System::Windows::Forms::CheckedListBox^  checkedListBoxOverridden;
	private: System::Windows::Forms::ListBox^  listBoxProject;
	private: System::Windows::Forms::ListBox^  listBoxReference;
	private: System::Windows::Forms::Button^  buttonOverrideToResult;
	private: System::Windows::Forms::Button^  buttonOverrideToReference;
	private: System::Windows::Forms::Button^  buttonNoneOverridden;
	private: System::Windows::Forms::Button^  buttonAllOverridden;
	private: System::Windows::Forms::CheckBox^  checkBoxHistoryMode;

	private:
		/// <summary>
		/// Required designer variable.
		//
		// Issue log array
		//
		array <Overrider::LogOfIssue^>^ arrayIssueLog;
		int mIssueIndex;
		int mFileCount;
		//
		// File Log array
		//
		array <Overrider::LogOfFile^>^ arrayFileLog;
		//
		// Temperory array and count for wildcard expansion
		//
		array <String^>^ arrayOriginalTemp;
		int countOriginalTemp;
		//
		// Saved Form Layout
		//
		System::Drawing::Point formLocation;
		System::Drawing::Size formSize;
		FormWindowState formWindowState;
		//
		//
		//
		//Overrider::PlatformFolders^ ReferencePlatforms;
private: System::Windows::Forms::TextBox^  textBoxTagNumberTo;

private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  labelProjectPlatform;
private: System::Windows::Forms::TextBox^  textBoxProjectPlatform;


private: System::Windows::Forms::Label^  labelReferencePlatform;
private: System::Windows::Forms::Label^  labelHistoryF;
private: System::Windows::Forms::TextBox^  textBoxHistoryF;
private: System::Windows::Forms::Button^  buttonProjectOverriddenModified;


private: System::Windows::Forms::TextBox^  textBoxReferencePlatform;


		 //Overrider::PlatformFolders^ ProjectPlatforms;
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->labelProjectOverrideList = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->labelReferenceOverrideList = (gcnew System::Windows::Forms::Label());
			this->labelProjectProject = (gcnew System::Windows::Forms::Label());
			this->labelProjectProjectOverrideList2 = (gcnew System::Windows::Forms::Label());
			this->labelReferenceProject = (gcnew System::Windows::Forms::Label());
			this->labelReferenceProjectOverrideList2 = (gcnew System::Windows::Forms::Label());
			this->labelHistoryC = (gcnew System::Windows::Forms::Label());
			this->buttonAnalysis = (gcnew System::Windows::Forms::Button());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->textBoxTagNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProjectProjectOverrideList2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProjectOverrideList = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHistoryC = (gcnew System::Windows::Forms::TextBox());
			this->textBoxReferenceProjectOverrideList2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxReferenceOverrideList = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxResult = (gcnew System::Windows::Forms::ComboBox());
			this->buttonBatch = (gcnew System::Windows::Forms::Button());
			this->buttonCopyAdded = (gcnew System::Windows::Forms::Button());
			this->buttonNoneAdded = (gcnew System::Windows::Forms::Button());
			this->buttonAllAdded = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonNoneDeleted = (gcnew System::Windows::Forms::Button());
			this->buttonAllDeleted = (gcnew System::Windows::Forms::Button());
			this->buttonOverriddenModified = (gcnew System::Windows::Forms::Button());
			this->buttonCopyModified = (gcnew System::Windows::Forms::Button());
			this->buttonNoneModified = (gcnew System::Windows::Forms::Button());
			this->buttonAllModified = (gcnew System::Windows::Forms::Button());
			this->buttonOverriddenDeleted = (gcnew System::Windows::Forms::Button());
			this->buttonOverriddenAdded = (gcnew System::Windows::Forms::Button());
			this->comboBoxProjectProject = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxReferenceProject = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxIssueNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelHistoryK = (gcnew System::Windows::Forms::Label());
			this->textBoxHistoryK = (gcnew System::Windows::Forms::TextBox());
			this->buttonOverrideToResult = (gcnew System::Windows::Forms::Button());
			this->buttonOverrideToReference = (gcnew System::Windows::Forms::Button());
			this->buttonNoneOverridden = (gcnew System::Windows::Forms::Button());
			this->buttonAllOverridden = (gcnew System::Windows::Forms::Button());
			this->textBoxTagNumberTo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProjectPlatform = (gcnew System::Windows::Forms::TextBox());
			this->labelProjectPlatform = (gcnew System::Windows::Forms::Label());
			this->textBoxReferencePlatform = (gcnew System::Windows::Forms::TextBox());
			this->labelReferencePlatform = (gcnew System::Windows::Forms::Label());
			this->labelHistoryF = (gcnew System::Windows::Forms::Label());
			this->textBoxHistoryF = (gcnew System::Windows::Forms::TextBox());
			this->buttonProjectOverriddenModified = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripStatusLabelCount = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->groupBoxProject = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxReference = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBoxAdded = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBoxDeleted = (gcnew System::Windows::Forms::CheckedListBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageControl = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButtonIssue = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonTag = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBoxHistoryMode = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDeleted = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxModified = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxAdded = (gcnew System::Windows::Forms::CheckBox());
			this->tabPageIssues = (gcnew System::Windows::Forms::TabPage());
			this->listBoxIssue = (gcnew System::Windows::Forms::ListBox());
			this->tabPageLog = (gcnew System::Windows::Forms::TabPage());
			this->textBoxLog = (gcnew System::Windows::Forms::TextBox());
			this->tabPageAdded = (gcnew System::Windows::Forms::TabPage());
			this->tabPageDeleted = (gcnew System::Windows::Forms::TabPage());
			this->tabPageModified = (gcnew System::Windows::Forms::TabPage());
			this->checkedListBoxModified = (gcnew System::Windows::Forms::CheckedListBox());
			this->tabPageOverridden = (gcnew System::Windows::Forms::TabPage());
			this->checkedListBoxOverridden = (gcnew System::Windows::Forms::CheckedListBox());
			this->tabPageProject = (gcnew System::Windows::Forms::TabPage());
			this->listBoxProject = (gcnew System::Windows::Forms::ListBox());
			this->tabPageReference = (gcnew System::Windows::Forms::TabPage());
			this->listBoxReference = (gcnew System::Windows::Forms::ListBox());
			this->statusStrip1->SuspendLayout();
			this->groupBoxProject->SuspendLayout();
			this->groupBoxReference->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPageControl->SuspendLayout();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->tabPageIssues->SuspendLayout();
			this->tabPageLog->SuspendLayout();
			this->tabPageAdded->SuspendLayout();
			this->tabPageDeleted->SuspendLayout();
			this->tabPageModified->SuspendLayout();
			this->tabPageOverridden->SuspendLayout();
			this->tabPageProject->SuspendLayout();
			this->tabPageReference->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelProjectOverrideList
			// 
			this->labelProjectOverrideList->AutoSize = true;
			this->labelProjectOverrideList->Location = System::Drawing::Point(19, 91);
			this->labelProjectOverrideList->Name = L"labelProjectOverrideList";
			this->labelProjectOverrideList->Size = System::Drawing::Size(83, 16);
			this->labelProjectOverrideList->TabIndex = 4;
			this->labelProjectOverrideList->Text = L"Override List";
			this->toolTip1->SetToolTip(this->labelProjectOverrideList, L"Click to change");
			this->labelProjectOverrideList->Click += gcnew System::EventHandler(this, &Form1::labelProjectOverrideList_Click);
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->ShowNewFolderButton = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"Text File|*.txt";
			this->openFileDialog1->Title = L"Override List";
			// 
			// labelReferenceOverrideList
			// 
			this->labelReferenceOverrideList->AutoSize = true;
			this->labelReferenceOverrideList->Location = System::Drawing::Point(19, 86);
			this->labelReferenceOverrideList->Name = L"labelReferenceOverrideList";
			this->labelReferenceOverrideList->Size = System::Drawing::Size(83, 16);
			this->labelReferenceOverrideList->TabIndex = 4;
			this->labelReferenceOverrideList->Text = L"Override List";
			this->toolTip1->SetToolTip(this->labelReferenceOverrideList, L"Click to change");
			this->labelReferenceOverrideList->Click += gcnew System::EventHandler(this, &Form1::labelReferenceOverrideList_Click);
			// 
			// labelProjectProject
			// 
			this->labelProjectProject->AutoSize = true;
			this->labelProjectProject->Location = System::Drawing::Point(19, 33);
			this->labelProjectProject->Name = L"labelProjectProject";
			this->labelProjectProject->Size = System::Drawing::Size(83, 16);
			this->labelProjectProject->TabIndex = 0;
			this->labelProjectProject->Text = L"Work Space";
			this->toolTip1->SetToolTip(this->labelProjectProject, L"Click to change");
			this->labelProjectProject->Click += gcnew System::EventHandler(this, &Form1::labelProjectProject_Click);
			// 
			// labelProjectProjectOverrideList2
			// 
			this->labelProjectProjectOverrideList2->AutoSize = true;
			this->labelProjectProjectOverrideList2->Location = System::Drawing::Point(9, 116);
			this->labelProjectProjectOverrideList2->Name = L"labelProjectProjectOverrideList2";
			this->labelProjectProjectOverrideList2->Size = System::Drawing::Size(93, 16);
			this->labelProjectProjectOverrideList2->TabIndex = 6;
			this->labelProjectProjectOverrideList2->Text = L"Override List 2";
			this->toolTip1->SetToolTip(this->labelProjectProjectOverrideList2, L"Click to change");
			this->labelProjectProjectOverrideList2->Click += gcnew System::EventHandler(this, &Form1::labelProjectProjectOverrideList2_Click);
			// 
			// labelReferenceProject
			// 
			this->labelReferenceProject->AutoSize = true;
			this->labelReferenceProject->Location = System::Drawing::Point(17, 24);
			this->labelReferenceProject->Name = L"labelReferenceProject";
			this->labelReferenceProject->Size = System::Drawing::Size(83, 16);
			this->labelReferenceProject->TabIndex = 0;
			this->labelReferenceProject->Text = L"Work Space";
			this->toolTip1->SetToolTip(this->labelReferenceProject, L"Click to change");
			this->labelReferenceProject->Click += gcnew System::EventHandler(this, &Form1::labelReferenceProject_Click);
			// 
			// labelReferenceProjectOverrideList2
			// 
			this->labelReferenceProjectOverrideList2->AutoSize = true;
			this->labelReferenceProjectOverrideList2->Location = System::Drawing::Point(9, 116);
			this->labelReferenceProjectOverrideList2->Name = L"labelReferenceProjectOverrideList2";
			this->labelReferenceProjectOverrideList2->Size = System::Drawing::Size(93, 16);
			this->labelReferenceProjectOverrideList2->TabIndex = 6;
			this->labelReferenceProjectOverrideList2->Text = L"Override List 2";
			this->toolTip1->SetToolTip(this->labelReferenceProjectOverrideList2, L"Click to change");
			this->labelReferenceProjectOverrideList2->Click += gcnew System::EventHandler(this, &Form1::labelReferenceProjectOverrideList2_Click);
			// 
			// labelHistoryC
			// 
			this->labelHistoryC->AutoSize = true;
			this->labelHistoryC->Location = System::Drawing::Point(19, 176);
			this->labelHistoryC->Name = L"labelHistoryC";
			this->labelHistoryC->Size = System::Drawing::Size(81, 16);
			this->labelHistoryC->TabIndex = 10;
			this->labelHistoryC->Text = L"History CRB";
			this->toolTip1->SetToolTip(this->labelHistoryC, L"Click to change");
			this->labelHistoryC->Click += gcnew System::EventHandler(this, &Form1::labelHistoryC_Click);
			// 
			// buttonAnalysis
			// 
			this->buttonAnalysis->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonAnalysis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonAnalysis->Location = System::Drawing::Point(0, 0);
			this->buttonAnalysis->Name = L"buttonAnalysis";
			this->buttonAnalysis->Size = System::Drawing::Size(287, 70);
			this->buttonAnalysis->TabIndex = 0;
			this->buttonAnalysis->Text = L"Analysis";
			this->toolTip1->SetToolTip(this->buttonAnalysis, L"Analysis override lists and history");
			this->buttonAnalysis->UseVisualStyleBackColor = true;
			this->buttonAnalysis->Click += gcnew System::EventHandler(this, &Form1::buttonAnalysis_Click);
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Location = System::Drawing::Point(14, 406);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(88, 16);
			this->labelResult->TabIndex = 2;
			this->labelResult->Text = L"Result Folder";
			this->toolTip1->SetToolTip(this->labelResult, L"Click to change");
			this->labelResult->Click += gcnew System::EventHandler(this, &Form1::labelResult_Click);
			// 
			// textBoxTagNumber
			// 
			this->textBoxTagNumber->Location = System::Drawing::Point(106, 3);
			this->textBoxTagNumber->Name = L"textBoxTagNumber";
			this->textBoxTagNumber->Size = System::Drawing::Size(120, 22);
			this->textBoxTagNumber->TabIndex = 1;
			this->toolTip1->SetToolTip(this->textBoxTagNumber, L"Tag number within history file for result filtering");
			// 
			// textBoxProjectProjectOverrideList2
			// 
			this->textBoxProjectProjectOverrideList2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxProjectProjectOverrideList2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBoxProjectProjectOverrideList2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystemDirectories;
			this->textBoxProjectProjectOverrideList2->Location = System::Drawing::Point(106, 116);
			this->textBoxProjectProjectOverrideList2->Name = L"textBoxProjectProjectOverrideList2";
			this->textBoxProjectProjectOverrideList2->Size = System::Drawing::Size(462, 22);
			this->textBoxProjectProjectOverrideList2->TabIndex = 7;
			this->toolTip1->SetToolTip(this->textBoxProjectProjectOverrideList2, L"An Override file list maintained by project owner");
			// 
			// textBoxProjectOverrideList
			// 
			this->textBoxProjectOverrideList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxProjectOverrideList->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBoxProjectOverrideList->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystemDirectories;
			this->textBoxProjectOverrideList->Location = System::Drawing::Point(106, 88);
			this->textBoxProjectOverrideList->Name = L"textBoxProjectOverrideList";
			this->textBoxProjectOverrideList->Size = System::Drawing::Size(462, 22);
			this->textBoxProjectOverrideList->TabIndex = 5;
			this->toolTip1->SetToolTip(this->textBoxProjectOverrideList, L"An Override file list generated by ProcessDsc.exe");
			// 
			// textBoxHistoryC
			// 
			this->textBoxHistoryC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxHistoryC->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBoxHistoryC->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystem;
			this->textBoxHistoryC->Location = System::Drawing::Point(106, 173);
			this->textBoxHistoryC->Name = L"textBoxHistoryC";
			this->textBoxHistoryC->Size = System::Drawing::Size(462, 22);
			this->textBoxHistoryC->TabIndex = 11;
			this->toolTip1->SetToolTip(this->textBoxHistoryC, L"History file provided by reference code owner with original SVN file list");
			// 
			// textBoxReferenceProjectOverrideList2
			// 
			this->textBoxReferenceProjectOverrideList2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxReferenceProjectOverrideList2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBoxReferenceProjectOverrideList2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystemDirectories;
			this->textBoxReferenceProjectOverrideList2->Location = System::Drawing::Point(106, 113);
			this->textBoxReferenceProjectOverrideList2->Name = L"textBoxReferenceProjectOverrideList2";
			this->textBoxReferenceProjectOverrideList2->Size = System::Drawing::Size(462, 22);
			this->textBoxReferenceProjectOverrideList2->TabIndex = 7;
			this->toolTip1->SetToolTip(this->textBoxReferenceProjectOverrideList2, L"An Override file list maintained by reference code owner");
			// 
			// textBoxReferenceOverrideList
			// 
			this->textBoxReferenceOverrideList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxReferenceOverrideList->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBoxReferenceOverrideList->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystemDirectories;
			this->textBoxReferenceOverrideList->Location = System::Drawing::Point(106, 83);
			this->textBoxReferenceOverrideList->Name = L"textBoxReferenceOverrideList";
			this->textBoxReferenceOverrideList->Size = System::Drawing::Size(462, 22);
			this->textBoxReferenceOverrideList->TabIndex = 5;
			this->toolTip1->SetToolTip(this->textBoxReferenceOverrideList, L"An Override file list generated by ProcessDsc.exe");
			// 
			// comboBoxResult
			// 
			this->comboBoxResult->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxResult->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboBoxResult->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystemDirectories;
			this->comboBoxResult->FormattingEnabled = true;
			this->comboBoxResult->Location = System::Drawing::Point(112, 403);
			this->comboBoxResult->Name = L"comboBoxResult";
			this->comboBoxResult->Size = System::Drawing::Size(462, 24);
			this->comboBoxResult->TabIndex = 3;
			this->toolTip1->SetToolTip(this->comboBoxResult, L"A folder for overridden files");
			this->comboBoxResult->SelectionChangeCommitted += gcnew System::EventHandler(this, &Form1::comboBox_SelectionChangeCommitted);
			this->comboBoxResult->Leave += gcnew System::EventHandler(this, &Form1::comboBoxResult_Leave);
			this->comboBoxResult->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::comboBox_KeyDown);
			// 
			// buttonBatch
			// 
			this->buttonBatch->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonBatch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonBatch->Location = System::Drawing::Point(0, 0);
			this->buttonBatch->Name = L"buttonBatch";
			this->buttonBatch->Size = System::Drawing::Size(287, 70);
			this->buttonBatch->TabIndex = 0;
			this->buttonBatch->Text = L"Batch";
			this->toolTip1->SetToolTip(this->buttonBatch, L"Batch processing analysising, adding, deleting, modifying and overriding");
			this->buttonBatch->UseVisualStyleBackColor = true;
			this->buttonBatch->Visible = false;
			this->buttonBatch->Click += gcnew System::EventHandler(this, &Form1::buttonBatch_Click);
			// 
			// buttonCopyAdded
			// 
			this->buttonCopyAdded->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonCopyAdded->Location = System::Drawing::Point(468, 545);
			this->buttonCopyAdded->Name = L"buttonCopyAdded";
			this->buttonCopyAdded->Size = System::Drawing::Size(113, 23);
			this->buttonCopyAdded->TabIndex = 3;
			this->buttonCopyAdded->Text = L"to Project";
			this->toolTip1->SetToolTip(this->buttonCopyAdded, L"Copy selected files to Project folder");
			this->buttonCopyAdded->UseVisualStyleBackColor = true;
			this->buttonCopyAdded->Click += gcnew System::EventHandler(this, &Form1::buttonCopyAdd_Click);
			// 
			// buttonNoneAdded
			// 
			this->buttonNoneAdded->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonNoneAdded->Location = System::Drawing::Point(90, 545);
			this->buttonNoneAdded->Name = L"buttonNoneAdded";
			this->buttonNoneAdded->Size = System::Drawing::Size(75, 23);
			this->buttonNoneAdded->TabIndex = 2;
			this->buttonNoneAdded->Text = L"None";
			this->toolTip1->SetToolTip(this->buttonNoneAdded, L"Select no file");
			this->buttonNoneAdded->UseVisualStyleBackColor = true;
			this->buttonNoneAdded->Click += gcnew System::EventHandler(this, &Form1::buttonNoneAdded_Click);
			// 
			// buttonAllAdded
			// 
			this->buttonAllAdded->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonAllAdded->Location = System::Drawing::Point(9, 545);
			this->buttonAllAdded->Name = L"buttonAllAdded";
			this->buttonAllAdded->Size = System::Drawing::Size(75, 23);
			this->buttonAllAdded->TabIndex = 1;
			this->buttonAllAdded->Tag = L"";
			this->buttonAllAdded->Text = L"All";
			this->toolTip1->SetToolTip(this->buttonAllAdded, L"Select all files");
			this->buttonAllAdded->UseVisualStyleBackColor = true;
			this->buttonAllAdded->Click += gcnew System::EventHandler(this, &Form1::buttonAllAdded_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonDelete->Location = System::Drawing::Point(468, 545);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(113, 23);
			this->buttonDelete->TabIndex = 4;
			this->buttonDelete->Text = L"from Project";
			this->toolTip1->SetToolTip(this->buttonDelete, L"Delete selected files from Project folder");
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &Form1::buttonDelete_Click);
			// 
			// buttonNoneDeleted
			// 
			this->buttonNoneDeleted->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonNoneDeleted->Location = System::Drawing::Point(90, 545);
			this->buttonNoneDeleted->Name = L"buttonNoneDeleted";
			this->buttonNoneDeleted->Size = System::Drawing::Size(75, 23);
			this->buttonNoneDeleted->TabIndex = 2;
			this->buttonNoneDeleted->Text = L"None";
			this->toolTip1->SetToolTip(this->buttonNoneDeleted, L"Select no file");
			this->buttonNoneDeleted->UseVisualStyleBackColor = true;
			this->buttonNoneDeleted->Click += gcnew System::EventHandler(this, &Form1::buttonNoneDeleted_Click);
			// 
			// buttonAllDeleted
			// 
			this->buttonAllDeleted->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonAllDeleted->Location = System::Drawing::Point(9, 545);
			this->buttonAllDeleted->Name = L"buttonAllDeleted";
			this->buttonAllDeleted->Size = System::Drawing::Size(75, 23);
			this->buttonAllDeleted->TabIndex = 1;
			this->buttonAllDeleted->Text = L"All";
			this->toolTip1->SetToolTip(this->buttonAllDeleted, L"Select all files");
			this->buttonAllDeleted->UseVisualStyleBackColor = true;
			this->buttonAllDeleted->Click += gcnew System::EventHandler(this, &Form1::buttonAllDeleted_Click);
			// 
			// buttonOverriddenModified
			// 
			this->buttonOverriddenModified->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonOverriddenModified->Location = System::Drawing::Point(171, 545);
			this->buttonOverriddenModified->Name = L"buttonOverriddenModified";
			this->buttonOverriddenModified->Size = System::Drawing::Size(100, 23);
			this->buttonOverriddenModified->TabIndex = 3;
			this->buttonOverriddenModified->Text = L"Overridden";
			this->toolTip1->SetToolTip(this->buttonOverriddenModified, L"Ttoggle selection of overridden files");
			this->buttonOverriddenModified->UseVisualStyleBackColor = true;
			this->buttonOverriddenModified->Click += gcnew System::EventHandler(this, &Form1::buttonOverriddenModified_Click);
			// 
			// buttonCopyModified
			// 
			this->buttonCopyModified->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonCopyModified->Location = System::Drawing::Point(468, 545);
			this->buttonCopyModified->Name = L"buttonCopyModified";
			this->buttonCopyModified->Size = System::Drawing::Size(113, 23);
			this->buttonCopyModified->TabIndex = 5;
			this->buttonCopyModified->Text = L"to Project";
			this->toolTip1->SetToolTip(this->buttonCopyModified, L"Copy selected files to Project/Result folder");
			this->buttonCopyModified->UseVisualStyleBackColor = true;
			this->buttonCopyModified->Click += gcnew System::EventHandler(this, &Form1::buttonCopyModified_Click);
			// 
			// buttonNoneModified
			// 
			this->buttonNoneModified->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonNoneModified->Location = System::Drawing::Point(90, 545);
			this->buttonNoneModified->Name = L"buttonNoneModified";
			this->buttonNoneModified->Size = System::Drawing::Size(75, 23);
			this->buttonNoneModified->TabIndex = 2;
			this->buttonNoneModified->Text = L"None";
			this->toolTip1->SetToolTip(this->buttonNoneModified, L"Select no file");
			this->buttonNoneModified->UseVisualStyleBackColor = true;
			this->buttonNoneModified->Click += gcnew System::EventHandler(this, &Form1::buttonNoneModified_Click);
			// 
			// buttonAllModified
			// 
			this->buttonAllModified->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonAllModified->Location = System::Drawing::Point(9, 545);
			this->buttonAllModified->Name = L"buttonAllModified";
			this->buttonAllModified->Size = System::Drawing::Size(75, 23);
			this->buttonAllModified->TabIndex = 1;
			this->buttonAllModified->Text = L"All";
			this->toolTip1->SetToolTip(this->buttonAllModified, L"Select all files");
			this->buttonAllModified->UseVisualStyleBackColor = true;
			this->buttonAllModified->Click += gcnew System::EventHandler(this, &Form1::buttonAllModified_Click);
			// 
			// buttonOverriddenDeleted
			// 
			this->buttonOverriddenDeleted->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonOverriddenDeleted->Location = System::Drawing::Point(171, 545);
			this->buttonOverriddenDeleted->Name = L"buttonOverriddenDeleted";
			this->buttonOverriddenDeleted->Size = System::Drawing::Size(100, 23);
			this->buttonOverriddenDeleted->TabIndex = 5;
			this->buttonOverriddenDeleted->Text = L"Overridden";
			this->toolTip1->SetToolTip(this->buttonOverriddenDeleted, L"Ttoggle selection of overridden files");
			this->buttonOverriddenDeleted->UseVisualStyleBackColor = true;
			this->buttonOverriddenDeleted->Click += gcnew System::EventHandler(this, &Form1::buttonOverriddenDeleted_Click);
			// 
			// buttonOverriddenAdded
			// 
			this->buttonOverriddenAdded->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonOverriddenAdded->Location = System::Drawing::Point(171, 545);
			this->buttonOverriddenAdded->Name = L"buttonOverriddenAdded";
			this->buttonOverriddenAdded->Size = System::Drawing::Size(100, 23);
			this->buttonOverriddenAdded->TabIndex = 6;
			this->buttonOverriddenAdded->Text = L"Overridden";
			this->toolTip1->SetToolTip(this->buttonOverriddenAdded, L"Ttoggle selection of overridden files");
			this->buttonOverriddenAdded->UseVisualStyleBackColor = true;
			this->buttonOverriddenAdded->Click += gcnew System::EventHandler(this, &Form1::buttonOverriddenAdded_Click);
			// 
			// comboBoxProjectProject
			// 
			this->comboBoxProjectProject->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxProjectProject->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboBoxProjectProject->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystemDirectories;
			this->comboBoxProjectProject->FormattingEnabled = true;
			this->comboBoxProjectProject->Location = System::Drawing::Point(106, 30);
			this->comboBoxProjectProject->Name = L"comboBoxProjectProject";
			this->comboBoxProjectProject->Size = System::Drawing::Size(462, 24);
			this->comboBoxProjectProject->TabIndex = 1;
			this->toolTip1->SetToolTip(this->comboBoxProjectProject, L"Project folder");
			this->comboBoxProjectProject->Leave += gcnew System::EventHandler(this, &Form1::comboBoxProjectProject_Leave);
			// 
			// comboBoxReferenceProject
			// 
			this->comboBoxReferenceProject->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxReferenceProject->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboBoxReferenceProject->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystemDirectories;
			this->comboBoxReferenceProject->FormattingEnabled = true;
			this->comboBoxReferenceProject->Location = System::Drawing::Point(106, 21);
			this->comboBoxReferenceProject->Name = L"comboBoxReferenceProject";
			this->comboBoxReferenceProject->Size = System::Drawing::Size(462, 24);
			this->comboBoxReferenceProject->TabIndex = 1;
			this->toolTip1->SetToolTip(this->comboBoxReferenceProject, L"Project folder");
			this->comboBoxReferenceProject->Leave += gcnew System::EventHandler(this, &Form1::comboBoxReferenceProject_Leave);
			// 
			// textBoxIssueNumber
			// 
			this->textBoxIssueNumber->Location = System::Drawing::Point(106, 31);
			this->textBoxIssueNumber->Name = L"textBoxIssueNumber";
			this->textBoxIssueNumber->Size = System::Drawing::Size(271, 22);
			this->textBoxIssueNumber->TabIndex = 3;
			this->toolTip1->SetToolTip(this->textBoxIssueNumber, L"Tag number within history file for result filtering");
			// 
			// labelHistoryK
			// 
			this->labelHistoryK->AutoSize = true;
			this->labelHistoryK->Location = System::Drawing::Point(9, 204);
			this->labelHistoryK->Name = L"labelHistoryK";
			this->labelHistoryK->Size = System::Drawing::Size(91, 16);
			this->labelHistoryK->TabIndex = 12;
			this->labelHistoryK->Text = L"History Kernel";
			this->toolTip1->SetToolTip(this->labelHistoryK, L"Click to change");
			this->labelHistoryK->Click += gcnew System::EventHandler(this, &Form1::labelHistoryK_Click);
			// 
			// textBoxHistoryK
			// 
			this->textBoxHistoryK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxHistoryK->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBoxHistoryK->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystem;
			this->textBoxHistoryK->Location = System::Drawing::Point(106, 201);
			this->textBoxHistoryK->Name = L"textBoxHistoryK";
			this->textBoxHistoryK->Size = System::Drawing::Size(462, 22);
			this->textBoxHistoryK->TabIndex = 13;
			this->toolTip1->SetToolTip(this->textBoxHistoryK, L"History file provided by reference code owner with original SVN file list");
			// 
			// buttonOverrideToResult
			// 
			this->buttonOverrideToResult->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonOverrideToResult->Location = System::Drawing::Point(362, 545);
			this->buttonOverrideToResult->Name = L"buttonOverrideToResult";
			this->buttonOverrideToResult->Size = System::Drawing::Size(100, 23);
			this->buttonOverrideToResult->TabIndex = 8;
			this->buttonOverrideToResult->Text = L"to Result";
			this->toolTip1->SetToolTip(this->buttonOverrideToResult, L"Ttoggle selection of overridden files");
			this->buttonOverrideToResult->UseVisualStyleBackColor = true;
			this->buttonOverrideToResult->Click += gcnew System::EventHandler(this, &Form1::buttonOverrideToResult_Click);
			// 
			// buttonOverrideToReference
			// 
			this->buttonOverrideToReference->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonOverrideToReference->Location = System::Drawing::Point(468, 545);
			this->buttonOverrideToReference->Name = L"buttonOverrideToReference";
			this->buttonOverrideToReference->Size = System::Drawing::Size(113, 23);
			this->buttonOverrideToReference->TabIndex = 9;
			this->buttonOverrideToReference->Text = L"to Reference";
			this->toolTip1->SetToolTip(this->buttonOverrideToReference, L"Copy selected files to Project/Result folder");
			this->buttonOverrideToReference->UseVisualStyleBackColor = true;
			this->buttonOverrideToReference->Click += gcnew System::EventHandler(this, &Form1::buttonOverrideToReference_Click);
			// 
			// buttonNoneOverridden
			// 
			this->buttonNoneOverridden->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonNoneOverridden->Location = System::Drawing::Point(90, 545);
			this->buttonNoneOverridden->Name = L"buttonNoneOverridden";
			this->buttonNoneOverridden->Size = System::Drawing::Size(75, 23);
			this->buttonNoneOverridden->TabIndex = 7;
			this->buttonNoneOverridden->Text = L"None";
			this->toolTip1->SetToolTip(this->buttonNoneOverridden, L"Select no file");
			this->buttonNoneOverridden->UseVisualStyleBackColor = true;
			this->buttonNoneOverridden->Click += gcnew System::EventHandler(this, &Form1::buttonNoneOverridden_Click);
			// 
			// buttonAllOverridden
			// 
			this->buttonAllOverridden->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonAllOverridden->Location = System::Drawing::Point(9, 545);
			this->buttonAllOverridden->Name = L"buttonAllOverridden";
			this->buttonAllOverridden->Size = System::Drawing::Size(75, 23);
			this->buttonAllOverridden->TabIndex = 6;
			this->buttonAllOverridden->Text = L"All";
			this->toolTip1->SetToolTip(this->buttonAllOverridden, L"Select all files");
			this->buttonAllOverridden->UseVisualStyleBackColor = true;
			this->buttonAllOverridden->Click += gcnew System::EventHandler(this, &Form1::buttonAllOverridden_Click);
			// 
			// textBoxTagNumberTo
			// 
			this->textBoxTagNumberTo->Location = System::Drawing::Point(257, 3);
			this->textBoxTagNumberTo->Name = L"textBoxTagNumberTo";
			this->textBoxTagNumberTo->Size = System::Drawing::Size(120, 22);
			this->textBoxTagNumberTo->TabIndex = 4;
			this->toolTip1->SetToolTip(this->textBoxTagNumberTo, L"Tag number within history file for result filtering");
			// 
			// textBoxProjectPlatform
			// 
			this->textBoxProjectPlatform->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxProjectPlatform->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBoxProjectPlatform->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystemDirectories;
			this->textBoxProjectPlatform->Location = System::Drawing::Point(106, 60);
			this->textBoxProjectPlatform->Name = L"textBoxProjectPlatform";
			this->textBoxProjectPlatform->Size = System::Drawing::Size(462, 22);
			this->textBoxProjectPlatform->TabIndex = 3;
			this->toolTip1->SetToolTip(this->textBoxProjectPlatform, L"An Override file list generated by ProcessDsc.exe");
			// 
			// labelProjectPlatform
			// 
			this->labelProjectPlatform->AutoSize = true;
			this->labelProjectPlatform->Location = System::Drawing::Point(29, 63);
			this->labelProjectPlatform->Name = L"labelProjectPlatform";
			this->labelProjectPlatform->Size = System::Drawing::Size(73, 16);
			this->labelProjectPlatform->TabIndex = 2;
			this->labelProjectPlatform->Text = L"Project Tip";
			this->toolTip1->SetToolTip(this->labelProjectPlatform, L"Click to change");
			this->labelProjectPlatform->Click += gcnew System::EventHandler(this, &Form1::labelProjectPlatform_Click);
			// 
			// textBoxReferencePlatform
			// 
			this->textBoxReferencePlatform->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxReferencePlatform->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBoxReferencePlatform->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystemDirectories;
			this->textBoxReferencePlatform->Location = System::Drawing::Point(106, 55);
			this->textBoxReferencePlatform->Name = L"textBoxReferencePlatform";
			this->textBoxReferencePlatform->Size = System::Drawing::Size(462, 22);
			this->textBoxReferencePlatform->TabIndex = 3;
			this->toolTip1->SetToolTip(this->textBoxReferencePlatform, L"An Override file list generated by ProcessDsc.exe");
			// 
			// labelReferencePlatform
			// 
			this->labelReferencePlatform->AutoSize = true;
			this->labelReferencePlatform->Location = System::Drawing::Point(27, 58);
			this->labelReferencePlatform->Name = L"labelReferencePlatform";
			this->labelReferencePlatform->Size = System::Drawing::Size(73, 16);
			this->labelReferencePlatform->TabIndex = 2;
			this->labelReferencePlatform->Text = L"Project Tip";
			this->toolTip1->SetToolTip(this->labelReferencePlatform, L"Click to change");
			this->labelReferencePlatform->Click += gcnew System::EventHandler(this, &Form1::labelReferencePlatform_Click);
			// 
			// labelHistoryF
			// 
			this->labelHistoryF->AutoSize = true;
			this->labelHistoryF->Location = System::Drawing::Point(1, 148);
			this->labelHistoryF->Name = L"labelHistoryF";
			this->labelHistoryF->Size = System::Drawing::Size(99, 16);
			this->labelHistoryF->TabIndex = 8;
			this->labelHistoryF->Text = L"History Feature";
			this->toolTip1->SetToolTip(this->labelHistoryF, L"Click to change");
			this->labelHistoryF->Click += gcnew System::EventHandler(this, &Form1::labelHistoryF_Click);
			// 
			// textBoxHistoryF
			// 
			this->textBoxHistoryF->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxHistoryF->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBoxHistoryF->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystem;
			this->textBoxHistoryF->Location = System::Drawing::Point(106, 145);
			this->textBoxHistoryF->Name = L"textBoxHistoryF";
			this->textBoxHistoryF->Size = System::Drawing::Size(462, 22);
			this->textBoxHistoryF->TabIndex = 9;
			this->toolTip1->SetToolTip(this->textBoxHistoryF, L"History file provided by reference code owner with original SVN file list");
			// 
			// buttonProjectOverriddenModified
			// 
			this->buttonProjectOverriddenModified->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonProjectOverriddenModified->Location = System::Drawing::Point(277, 545);
			this->buttonProjectOverriddenModified->Name = L"buttonProjectOverriddenModified";
			this->buttonProjectOverriddenModified->Size = System::Drawing::Size(137, 23);
			this->buttonProjectOverriddenModified->TabIndex = 4;
			this->buttonProjectOverriddenModified->Text = L"Project Overridden";
			this->toolTip1->SetToolTip(this->buttonProjectOverriddenModified, L"Ttoggle selection of overridden files");
			this->buttonProjectOverriddenModified->UseVisualStyleBackColor = true;
			this->buttonProjectOverriddenModified->Visible = false;
			this->buttonProjectOverriddenModified->Click += gcnew System::EventHandler(this, &Form1::buttonProjectOverriddenModified_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripProgressBar1, 
				this->toolStripStatusLabelCount});
			this->statusStrip1->Location = System::Drawing::Point(0, 606);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(602, 22);
			this->statusStrip1->TabIndex = 5;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->AutoSize = false;
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(461, 16);
			this->toolStripProgressBar1->Step = 1;
			// 
			// toolStripStatusLabelCount
			// 
			this->toolStripStatusLabelCount->AutoSize = false;
			this->toolStripStatusLabelCount->Name = L"toolStripStatusLabelCount";
			this->toolStripStatusLabelCount->Size = System::Drawing::Size(341, 17);
			this->toolStripStatusLabelCount->Spring = true;
			this->toolStripStatusLabelCount->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->toolStripStatusLabelCount->ToolTipText = L"Item count";
			this->toolStripStatusLabelCount->Visible = false;
			// 
			// groupBoxProject
			// 
			this->groupBoxProject->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBoxProject->Controls->Add(this->labelProjectPlatform);
			this->groupBoxProject->Controls->Add(this->textBoxProjectPlatform);
			this->groupBoxProject->Controls->Add(this->comboBoxProjectProject);
			this->groupBoxProject->Controls->Add(this->textBoxProjectProjectOverrideList2);
			this->groupBoxProject->Controls->Add(this->textBoxProjectOverrideList);
			this->groupBoxProject->Controls->Add(this->labelProjectProject);
			this->groupBoxProject->Controls->Add(this->labelProjectProjectOverrideList2);
			this->groupBoxProject->Controls->Add(this->labelProjectOverrideList);
			this->groupBoxProject->Location = System::Drawing::Point(6, 6);
			this->groupBoxProject->Name = L"groupBoxProject";
			this->groupBoxProject->Size = System::Drawing::Size(578, 150);
			this->groupBoxProject->TabIndex = 0;
			this->groupBoxProject->TabStop = false;
			this->groupBoxProject->Text = L"Project";
			// 
			// groupBoxReference
			// 
			this->groupBoxReference->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBoxReference->Controls->Add(this->labelHistoryF);
			this->groupBoxReference->Controls->Add(this->textBoxHistoryF);
			this->groupBoxReference->Controls->Add(this->labelReferencePlatform);
			this->groupBoxReference->Controls->Add(this->textBoxReferencePlatform);
			this->groupBoxReference->Controls->Add(this->labelHistoryK);
			this->groupBoxReference->Controls->Add(this->textBoxHistoryK);
			this->groupBoxReference->Controls->Add(this->comboBoxReferenceProject);
			this->groupBoxReference->Controls->Add(this->textBoxReferenceProjectOverrideList2);
			this->groupBoxReference->Controls->Add(this->labelReferenceProject);
			this->groupBoxReference->Controls->Add(this->textBoxReferenceOverrideList);
			this->groupBoxReference->Controls->Add(this->labelReferenceProjectOverrideList2);
			this->groupBoxReference->Controls->Add(this->labelHistoryC);
			this->groupBoxReference->Controls->Add(this->textBoxHistoryC);
			this->groupBoxReference->Controls->Add(this->labelReferenceOverrideList);
			this->groupBoxReference->Location = System::Drawing::Point(6, 162);
			this->groupBoxReference->Name = L"groupBoxReference";
			this->groupBoxReference->Size = System::Drawing::Size(578, 235);
			this->groupBoxReference->TabIndex = 1;
			this->groupBoxReference->TabStop = false;
			this->groupBoxReference->Text = L"Reference";
			// 
			// checkedListBoxAdded
			// 
			this->checkedListBoxAdded->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkedListBoxAdded->CheckOnClick = true;
			this->checkedListBoxAdded->FormattingEnabled = true;
			this->checkedListBoxAdded->HorizontalScrollbar = true;
			this->checkedListBoxAdded->Location = System::Drawing::Point(6, 6);
			this->checkedListBoxAdded->Name = L"checkedListBoxAdded";
			this->checkedListBoxAdded->Size = System::Drawing::Size(582, 514);
			this->checkedListBoxAdded->TabIndex = 0;
			this->checkedListBoxAdded->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &Form1::checkedListBox_ItemCheck);
			// 
			// checkedListBoxDeleted
			// 
			this->checkedListBoxDeleted->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkedListBoxDeleted->CheckOnClick = true;
			this->checkedListBoxDeleted->FormattingEnabled = true;
			this->checkedListBoxDeleted->HorizontalScrollbar = true;
			this->checkedListBoxDeleted->Location = System::Drawing::Point(6, 6);
			this->checkedListBoxDeleted->Name = L"checkedListBoxDeleted";
			this->checkedListBoxDeleted->Size = System::Drawing::Size(582, 514);
			this->checkedListBoxDeleted->TabIndex = 0;
			this->checkedListBoxDeleted->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &Form1::checkedListBox_ItemCheck);
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabControl1->Controls->Add(this->tabPageControl);
			this->tabControl1->Controls->Add(this->tabPageIssues);
			this->tabControl1->Controls->Add(this->tabPageLog);
			this->tabControl1->Controls->Add(this->tabPageAdded);
			this->tabControl1->Controls->Add(this->tabPageDeleted);
			this->tabControl1->Controls->Add(this->tabPageModified);
			this->tabControl1->Controls->Add(this->tabPageOverridden);
			this->tabControl1->Controls->Add(this->tabPageProject);
			this->tabControl1->Controls->Add(this->tabPageReference);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(602, 606);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPageControl
			// 
			this->tabPageControl->BackColor = System::Drawing::Color::Transparent;
			this->tabPageControl->Controls->Add(this->splitContainer1);
			this->tabPageControl->Controls->Add(this->groupBoxProject);
			this->tabPageControl->Controls->Add(this->groupBoxReference);
			this->tabPageControl->Controls->Add(this->comboBoxResult);
			this->tabPageControl->Controls->Add(this->labelResult);
			this->tabPageControl->Controls->Add(this->splitContainer2);
			this->tabPageControl->Location = System::Drawing::Point(4, 28);
			this->tabPageControl->Name = L"tabPageControl";
			this->tabPageControl->Padding = System::Windows::Forms::Padding(3);
			this->tabPageControl->Size = System::Drawing::Size(594, 574);
			this->tabPageControl->TabIndex = 0;
			this->tabPageControl->Text = L"Control";
			this->tabPageControl->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->IsSplitterFixed = true;
			this->splitContainer1->Location = System::Drawing::Point(8, 501);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->buttonAnalysis);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->buttonBatch);
			this->splitContainer1->Size = System::Drawing::Size(578, 70);
			this->splitContainer1->SplitterDistance = 287;
			this->splitContainer1->TabIndex = 10;
			this->splitContainer1->SizeChanged += gcnew System::EventHandler(this, &Form1::splitContainer1_SizeChanged);
			// 
			// splitContainer2
			// 
			this->splitContainer2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer2->Location = System::Drawing::Point(6, 433);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->label2);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxTagNumberTo);
			this->splitContainer2->Panel1->Controls->Add(this->radioButtonIssue);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxIssueNumber);
			this->splitContainer2->Panel1->Controls->Add(this->radioButtonTag);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxTagNumber);
			this->splitContainer2->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->checkBoxHistoryMode);
			this->splitContainer2->Panel2->Controls->Add(this->checkBoxDeleted);
			this->splitContainer2->Panel2->Controls->Add(this->checkBoxModified);
			this->splitContainer2->Panel2->Controls->Add(this->checkBoxAdded);
			this->splitContainer2->Panel2->Cursor = System::Windows::Forms::Cursors::Default;
			this->splitContainer2->Size = System::Drawing::Size(582, 62);
			this->splitContainer2->SplitterDistance = 389;
			this->splitContainer2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(232, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"to";
			// 
			// radioButtonIssue
			// 
			this->radioButtonIssue->AutoSize = true;
			this->radioButtonIssue->Location = System::Drawing::Point(35, 32);
			this->radioButtonIssue->Name = L"radioButtonIssue";
			this->radioButtonIssue->Size = System::Drawing::Size(65, 20);
			this->radioButtonIssue->TabIndex = 2;
			this->radioButtonIssue->TabStop = true;
			this->radioButtonIssue->Text = L"Issue#";
			this->radioButtonIssue->UseVisualStyleBackColor = true;
			this->radioButtonIssue->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButtonTag
			// 
			this->radioButtonTag->AutoSize = true;
			this->radioButtonTag->Location = System::Drawing::Point(35, 4);
			this->radioButtonTag->Name = L"radioButtonTag";
			this->radioButtonTag->Size = System::Drawing::Size(58, 20);
			this->radioButtonTag->TabIndex = 0;
			this->radioButtonTag->TabStop = true;
			this->radioButtonTag->Text = L"Tag#";
			this->radioButtonTag->UseVisualStyleBackColor = true;
			this->radioButtonTag->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(62, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 0;
			// 
			// checkBoxHistoryMode
			// 
			this->checkBoxHistoryMode->AutoSize = true;
			this->checkBoxHistoryMode->Cursor = System::Windows::Forms::Cursors::Default;
			this->checkBoxHistoryMode->Location = System::Drawing::Point(4, 8);
			this->checkBoxHistoryMode->Name = L"checkBoxHistoryMode";
			this->checkBoxHistoryMode->Size = System::Drawing::Size(107, 20);
			this->checkBoxHistoryMode->TabIndex = 3;
			this->checkBoxHistoryMode->Text = L"Hisotry Mode";
			this->checkBoxHistoryMode->UseVisualStyleBackColor = true;
			this->checkBoxHistoryMode->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBoxHistoryMode_CheckedChanged);
			// 
			// checkBoxDeleted
			// 
			this->checkBoxDeleted->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->checkBoxDeleted->AutoSize = true;
			this->checkBoxDeleted->Checked = true;
			this->checkBoxDeleted->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxDeleted->Cursor = System::Windows::Forms::Cursors::Default;
			this->checkBoxDeleted->Location = System::Drawing::Point(4, 34);
			this->checkBoxDeleted->Name = L"checkBoxDeleted";
			this->checkBoxDeleted->Size = System::Drawing::Size(75, 20);
			this->checkBoxDeleted->TabIndex = 1;
			this->checkBoxDeleted->Text = L"Deleted";
			this->checkBoxDeleted->UseVisualStyleBackColor = true;
			this->checkBoxDeleted->Visible = false;
			// 
			// checkBoxModified
			// 
			this->checkBoxModified->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->checkBoxModified->AutoSize = true;
			this->checkBoxModified->Checked = true;
			this->checkBoxModified->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxModified->Cursor = System::Windows::Forms::Cursors::Default;
			this->checkBoxModified->Location = System::Drawing::Point(106, 33);
			this->checkBoxModified->Name = L"checkBoxModified";
			this->checkBoxModified->Size = System::Drawing::Size(79, 20);
			this->checkBoxModified->TabIndex = 2;
			this->checkBoxModified->Text = L"Modified";
			this->checkBoxModified->UseVisualStyleBackColor = true;
			this->checkBoxModified->Visible = false;
			// 
			// checkBoxAdded
			// 
			this->checkBoxAdded->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->checkBoxAdded->AutoSize = true;
			this->checkBoxAdded->Checked = true;
			this->checkBoxAdded->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxAdded->Cursor = System::Windows::Forms::Cursors::Default;
			this->checkBoxAdded->Location = System::Drawing::Point(117, 8);
			this->checkBoxAdded->Name = L"checkBoxAdded";
			this->checkBoxAdded->Size = System::Drawing::Size(68, 20);
			this->checkBoxAdded->TabIndex = 0;
			this->checkBoxAdded->Text = L"Added";
			this->checkBoxAdded->UseVisualStyleBackColor = true;
			this->checkBoxAdded->Visible = false;
			// 
			// tabPageIssues
			// 
			this->tabPageIssues->Controls->Add(this->listBoxIssue);
			this->tabPageIssues->Location = System::Drawing::Point(4, 28);
			this->tabPageIssues->Name = L"tabPageIssues";
			this->tabPageIssues->Size = System::Drawing::Size(594, 574);
			this->tabPageIssues->TabIndex = 8;
			this->tabPageIssues->Text = L"Issues";
			this->tabPageIssues->UseVisualStyleBackColor = true;
			this->tabPageIssues->Leave += gcnew System::EventHandler(this, &Form1::tabPage_Leave);
			this->tabPageIssues->Enter += gcnew System::EventHandler(this, &Form1::tabPageIssues_Enter);
			// 
			// listBoxIssue
			// 
			this->listBoxIssue->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBoxIssue->FormattingEnabled = true;
			this->listBoxIssue->ItemHeight = 16;
			this->listBoxIssue->Location = System::Drawing::Point(0, 0);
			this->listBoxIssue->Name = L"listBoxIssue";
			this->listBoxIssue->Size = System::Drawing::Size(594, 564);
			this->listBoxIssue->TabIndex = 0;
			this->listBoxIssue->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBoxIssue_SelectedIndexChanged);
			// 
			// tabPageLog
			// 
			this->tabPageLog->Controls->Add(this->textBoxLog);
			this->tabPageLog->Location = System::Drawing::Point(4, 28);
			this->tabPageLog->Name = L"tabPageLog";
			this->tabPageLog->Size = System::Drawing::Size(594, 574);
			this->tabPageLog->TabIndex = 9;
			this->tabPageLog->Text = L"Log";
			this->tabPageLog->UseVisualStyleBackColor = true;
			// 
			// textBoxLog
			// 
			this->textBoxLog->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBoxLog->Location = System::Drawing::Point(0, 0);
			this->textBoxLog->Multiline = true;
			this->textBoxLog->Name = L"textBoxLog";
			this->textBoxLog->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBoxLog->Size = System::Drawing::Size(594, 574);
			this->textBoxLog->TabIndex = 0;
			this->textBoxLog->WordWrap = false;
			// 
			// tabPageAdded
			// 
			this->tabPageAdded->Controls->Add(this->buttonOverriddenAdded);
			this->tabPageAdded->Controls->Add(this->buttonCopyAdded);
			this->tabPageAdded->Controls->Add(this->buttonNoneAdded);
			this->tabPageAdded->Controls->Add(this->checkedListBoxAdded);
			this->tabPageAdded->Controls->Add(this->buttonAllAdded);
			this->tabPageAdded->Location = System::Drawing::Point(4, 28);
			this->tabPageAdded->Name = L"tabPageAdded";
			this->tabPageAdded->Padding = System::Windows::Forms::Padding(3);
			this->tabPageAdded->Size = System::Drawing::Size(594, 574);
			this->tabPageAdded->TabIndex = 1;
			this->tabPageAdded->Text = L"Added";
			this->tabPageAdded->UseVisualStyleBackColor = true;
			this->tabPageAdded->Leave += gcnew System::EventHandler(this, &Form1::tabPage_Leave);
			this->tabPageAdded->Enter += gcnew System::EventHandler(this, &Form1::tabPageAdded_Enter);
			// 
			// tabPageDeleted
			// 
			this->tabPageDeleted->Controls->Add(this->buttonOverriddenDeleted);
			this->tabPageDeleted->Controls->Add(this->buttonDelete);
			this->tabPageDeleted->Controls->Add(this->buttonNoneDeleted);
			this->tabPageDeleted->Controls->Add(this->buttonAllDeleted);
			this->tabPageDeleted->Controls->Add(this->checkedListBoxDeleted);
			this->tabPageDeleted->Location = System::Drawing::Point(4, 28);
			this->tabPageDeleted->Name = L"tabPageDeleted";
			this->tabPageDeleted->Padding = System::Windows::Forms::Padding(3);
			this->tabPageDeleted->Size = System::Drawing::Size(594, 574);
			this->tabPageDeleted->TabIndex = 2;
			this->tabPageDeleted->Text = L"Deleted";
			this->tabPageDeleted->UseVisualStyleBackColor = true;
			this->tabPageDeleted->Leave += gcnew System::EventHandler(this, &Form1::tabPage_Leave);
			this->tabPageDeleted->Enter += gcnew System::EventHandler(this, &Form1::tabPageDeleted_Enter);
			// 
			// tabPageModified
			// 
			this->tabPageModified->Controls->Add(this->buttonProjectOverriddenModified);
			this->tabPageModified->Controls->Add(this->buttonOverriddenModified);
			this->tabPageModified->Controls->Add(this->buttonCopyModified);
			this->tabPageModified->Controls->Add(this->buttonNoneModified);
			this->tabPageModified->Controls->Add(this->buttonAllModified);
			this->tabPageModified->Controls->Add(this->checkedListBoxModified);
			this->tabPageModified->Location = System::Drawing::Point(4, 28);
			this->tabPageModified->Name = L"tabPageModified";
			this->tabPageModified->Padding = System::Windows::Forms::Padding(3);
			this->tabPageModified->Size = System::Drawing::Size(594, 574);
			this->tabPageModified->TabIndex = 3;
			this->tabPageModified->Text = L"Modified";
			this->tabPageModified->UseVisualStyleBackColor = true;
			this->tabPageModified->Leave += gcnew System::EventHandler(this, &Form1::tabPage_Leave);
			this->tabPageModified->Enter += gcnew System::EventHandler(this, &Form1::tabPageModified_Enter);
			// 
			// checkedListBoxModified
			// 
			this->checkedListBoxModified->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkedListBoxModified->CheckOnClick = true;
			this->checkedListBoxModified->FormattingEnabled = true;
			this->checkedListBoxModified->HorizontalScrollbar = true;
			this->checkedListBoxModified->Location = System::Drawing::Point(6, 6);
			this->checkedListBoxModified->Name = L"checkedListBoxModified";
			this->checkedListBoxModified->Size = System::Drawing::Size(582, 514);
			this->checkedListBoxModified->TabIndex = 0;
			this->checkedListBoxModified->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &Form1::checkedListBox_ItemCheck);
			// 
			// tabPageOverridden
			// 
			this->tabPageOverridden->Controls->Add(this->buttonOverrideToResult);
			this->tabPageOverridden->Controls->Add(this->buttonOverrideToReference);
			this->tabPageOverridden->Controls->Add(this->buttonNoneOverridden);
			this->tabPageOverridden->Controls->Add(this->buttonAllOverridden);
			this->tabPageOverridden->Controls->Add(this->checkedListBoxOverridden);
			this->tabPageOverridden->Location = System::Drawing::Point(4, 28);
			this->tabPageOverridden->Name = L"tabPageOverridden";
			this->tabPageOverridden->Padding = System::Windows::Forms::Padding(3);
			this->tabPageOverridden->Size = System::Drawing::Size(594, 574);
			this->tabPageOverridden->TabIndex = 10;
			this->tabPageOverridden->Text = L"Overridden";
			this->tabPageOverridden->UseVisualStyleBackColor = true;
			this->tabPageOverridden->Leave += gcnew System::EventHandler(this, &Form1::tabPage_Leave);
			this->tabPageOverridden->Enter += gcnew System::EventHandler(this, &Form1::tabPageOverridden_Enter);
			// 
			// checkedListBoxOverridden
			// 
			this->checkedListBoxOverridden->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkedListBoxOverridden->CheckOnClick = true;
			this->checkedListBoxOverridden->FormattingEnabled = true;
			this->checkedListBoxOverridden->Location = System::Drawing::Point(6, 6);
			this->checkedListBoxOverridden->Name = L"checkedListBoxOverridden";
			this->checkedListBoxOverridden->Size = System::Drawing::Size(582, 514);
			this->checkedListBoxOverridden->TabIndex = 0;
			this->checkedListBoxOverridden->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &Form1::checkedListBox_ItemCheck);
			// 
			// tabPageProject
			// 
			this->tabPageProject->Controls->Add(this->listBoxProject);
			this->tabPageProject->Location = System::Drawing::Point(4, 28);
			this->tabPageProject->Name = L"tabPageProject";
			this->tabPageProject->Padding = System::Windows::Forms::Padding(3);
			this->tabPageProject->Size = System::Drawing::Size(594, 574);
			this->tabPageProject->TabIndex = 11;
			this->tabPageProject->Text = L"Project";
			this->tabPageProject->UseVisualStyleBackColor = true;
			this->tabPageProject->Leave += gcnew System::EventHandler(this, &Form1::tabPage_Leave);
			this->tabPageProject->Enter += gcnew System::EventHandler(this, &Form1::tabPageProject_Enter);
			// 
			// listBoxProject
			// 
			this->listBoxProject->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBoxProject->FormattingEnabled = true;
			this->listBoxProject->ItemHeight = 16;
			this->listBoxProject->Location = System::Drawing::Point(3, 3);
			this->listBoxProject->Name = L"listBoxProject";
			this->listBoxProject->Size = System::Drawing::Size(588, 564);
			this->listBoxProject->TabIndex = 0;
			// 
			// tabPageReference
			// 
			this->tabPageReference->Controls->Add(this->listBoxReference);
			this->tabPageReference->Location = System::Drawing::Point(4, 28);
			this->tabPageReference->Name = L"tabPageReference";
			this->tabPageReference->Padding = System::Windows::Forms::Padding(3);
			this->tabPageReference->Size = System::Drawing::Size(594, 574);
			this->tabPageReference->TabIndex = 12;
			this->tabPageReference->Text = L"Reference";
			this->tabPageReference->UseVisualStyleBackColor = true;
			this->tabPageReference->Leave += gcnew System::EventHandler(this, &Form1::tabPage_Leave);
			this->tabPageReference->Enter += gcnew System::EventHandler(this, &Form1::tabPageReference_Enter);
			// 
			// listBoxReference
			// 
			this->listBoxReference->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBoxReference->FormattingEnabled = true;
			this->listBoxReference->ItemHeight = 16;
			this->listBoxReference->Location = System::Drawing::Point(3, 3);
			this->listBoxReference->Name = L"listBoxReference";
			this->listBoxReference->Size = System::Drawing::Size(588, 564);
			this->listBoxReference->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(602, 628);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->statusStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(614, 666);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Overrider 5.0.001";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Form1::Form1_SizeChanged);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
			this->LocationChanged += gcnew System::EventHandler(this, &Form1::Form1_LocationChanged);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBoxProject->ResumeLayout(false);
			this->groupBoxProject->PerformLayout();
			this->groupBoxReference->ResumeLayout(false);
			this->groupBoxReference->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPageControl->ResumeLayout(false);
			this->tabPageControl->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			this->splitContainer2->ResumeLayout(false);
			this->tabPageIssues->ResumeLayout(false);
			this->tabPageLog->ResumeLayout(false);
			this->tabPageLog->PerformLayout();
			this->tabPageAdded->ResumeLayout(false);
			this->tabPageDeleted->ResumeLayout(false);
			this->tabPageModified->ResumeLayout(false);
			this->tabPageOverridden->ResumeLayout(false);
			this->tabPageProject->ResumeLayout(false);
			this->tabPageReference->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//
	// subroutins
	//
	private: System::Void SaveComboSettings(RegistryKey ^appKey, String ^keyName, System::Windows::Forms::ComboBox ^comboBox) {
			    String ^keyNameIndex = keyName + "_Index";
				RegistryKey ^subKey = appKey->OpenSubKey(keyName, true);
				if (subKey != nullptr) {
					appKey->DeleteSubKeyTree(keyName);
				}
				subKey = appKey->CreateSubKey(keyName);
				for (int i=0; i<comboBox->Items->Count && i < MAX_LOCATION_SAVED; i++) {
					comboBox->SelectedIndex = i;
					subKey->SetValue(i.ToString() , comboBox->Text);
				}
			 }

	private: System::Void SaveSettings(Void) {
				RegistryKey ^appKey = Registry::CurrentUser->CreateSubKey("Software\\Insyde\\" + APP_KEY);

				appKey->SetValue(PROJECT_PROJECT_PATH_VALUE, comboBoxProjectProject->Text);
				appKey->SetValue(PROJECT_PLATFORM_PATH_VALUE, textBoxProjectPlatform->Text);
				appKey->SetValue(OVERRIDE_LIST_FILE_VALUE, textBoxProjectOverrideList->Text);
				appKey->SetValue(OVERRIDE_LIST_2_FILE_VALUE, textBoxProjectProjectOverrideList2->Text);
				appKey->SetValue(REFERENCE_PROJECT_PATH_VALUE, comboBoxReferenceProject->Text);
				appKey->SetValue(REFERENCE_PLATFORM_PATH_VALUE, textBoxReferencePlatform->Text);
				appKey->SetValue(OVERRIDE_LIST_R_FILE_VALUE, textBoxReferenceOverrideList->Text);
				appKey->SetValue(OVERRIDE_LIST_R_2_FILE_VALUE, textBoxReferenceProjectOverrideList2->Text);
				appKey->SetValue(RESULT_PATH_VALUE, comboBoxResult->Text);

				appKey->SetValue(HISTORY_0_VALUE, textBoxHistoryF->Text);
				appKey->SetValue(HISTORY_VALUE, textBoxHistoryC->Text);
				appKey->SetValue(HISTORY_2_VALUE, textBoxHistoryK->Text);
				appKey->SetValue(TAG_NUMBER_VALUE, textBoxTagNumber->Text);
				appKey->SetValue(TAG_NUMBER_TO_VALUE, textBoxTagNumberTo->Text);
				appKey->SetValue(RADIO_TAG_NUMBER_VALUE, radioButtonTag->Checked);
				appKey->SetValue(ISSUE_NUMBER_VALUE, textBoxIssueNumber->Text);
				appKey->SetValue(RADIO_ISSUE_NUMBER_VALUE, radioButtonIssue->Checked);

				appKey->SetValue(HISTORY_MODE_VALUE, checkBoxHistoryMode->Checked);
				appKey->SetValue(ENABLE_ADDED_VALUE, checkBoxAdded->Checked);
				appKey->SetValue(ENABLE_DELETED_VALUE, checkBoxDeleted->Checked);
				appKey->SetValue(ENABLE_MODIFIED_VALUE, checkBoxModified->Checked);

				SaveComboSettings(appKey, PROJECT_PROJECT_PATH_KEY, comboBoxProjectProject);
				SaveComboSettings(appKey, REFERENCE_PROJECT_PATH_KEY, comboBoxReferenceProject);
				SaveComboSettings(appKey, RESULT_PATH_KEY, comboBoxResult);
				//
				// Save form layout
				//
				appKey->SetValue(FORM_LOCATION_X_VALUE, formLocation.X);
				appKey->SetValue(FORM_LOCATION_Y_VALUE, formLocation.Y);
				appKey->SetValue(FORM_SIZE_WIDTH_VALUE, formSize.Width);
				appKey->SetValue(FORM_SIZE_HEIGHT_VALUE, formSize.Height);
				if (this->WindowState != FormWindowState::Minimized) {
					appKey->SetValue(FORM_SIZE_WINDOWSTATE_VALUE, (Int32)this->WindowState);
				}
			 }

	private: System::Void RestoreComboSettings(RegistryKey ^appKey, String ^keyName, System::Windows::Forms::ComboBox ^comboBox) {
				RegistryKey ^subKey = appKey->OpenSubKey(keyName);
				if (subKey != nullptr) {
					for (int i=0; i < MAX_LOCATION_SAVED; i++) {
						String ^PathName = (String ^)subKey->GetValue(i.ToString());
						if (String::IsNullOrEmpty(PathName)) break;
						comboBox->Items->Add(PathName);
					}
				}
			 }

	private: System::Void RestoreSettings(Void) {
				//
				// Retrieve Registry keys
				//
				RegistryKey ^appKey = Registry::CurrentUser->OpenSubKey("Software\\Insyde\\" + APP_KEY);
				if (appKey == nullptr) {
					Registry::SetValue("HKEY_CURRENT_USER\\Software\\Insyde\\" + APP_KEY, APP_VERSION_VALUE, APP_REGISTRY_VERSION);
					return;
				}
				String ^Str = (String ^)appKey->GetValue(APP_VERSION_VALUE, "0.0");
				if (String::Compare(APP_REGISTRY_VERSION, Str) != 0) {
					RegistryKey ^appFamilyKey = Registry::CurrentUser->OpenSubKey("Software\\Insyde", true);
					appFamilyKey->DeleteSubKeyTree (APP_KEY);
					Registry::SetValue("HKEY_CURRENT_USER\\Software\\Insyde\\" + APP_KEY, APP_VERSION_VALUE, APP_REGISTRY_VERSION);
					return;
				}
				//
				// Restore overridden settings
				//
				RestoreComboSettings(appKey, PROJECT_PROJECT_PATH_KEY, comboBoxProjectProject);
				RestoreComboSettings(appKey, REFERENCE_PROJECT_PATH_KEY, comboBoxReferenceProject);
				RestoreComboSettings(appKey, RESULT_PATH_KEY, comboBoxResult);

				comboBoxProjectProject->Text	            =                 (String ^) appKey->GetValue(PROJECT_PROJECT_PATH_VALUE, "");
				textBoxProjectPlatform->Text	            =                 (String ^) appKey->GetValue(PROJECT_PLATFORM_PATH_VALUE, "");
				textBoxProjectOverrideList->Text		    =                 (String ^) appKey->GetValue(OVERRIDE_LIST_FILE_VALUE, "");
				textBoxProjectProjectOverrideList2->Text	=                 (String ^) appKey->GetValue(OVERRIDE_LIST_2_FILE_VALUE, "");
				comboBoxReferenceProject->Text	            =                 (String ^) appKey->GetValue(REFERENCE_PROJECT_PATH_VALUE, "");
				textBoxReferencePlatform->Text	            =                 (String ^) appKey->GetValue(REFERENCE_PLATFORM_PATH_VALUE, "");
				textBoxReferenceOverrideList->Text		    =                 (String ^) appKey->GetValue(OVERRIDE_LIST_R_FILE_VALUE, "");
				textBoxReferenceProjectOverrideList2->Text	= 			      (String ^) appKey->GetValue(OVERRIDE_LIST_R_2_FILE_VALUE, "");
				comboBoxResult->Text			=                 (String ^) appKey->GetValue(RESULT_PATH_VALUE, "");

				textBoxHistoryF->Text			=                 (String ^) appKey->GetValue(HISTORY_0_VALUE, "");
				textBoxHistoryC->Text			=                 (String ^) appKey->GetValue(HISTORY_VALUE, "");
				textBoxHistoryK->Text			=                 (String ^) appKey->GetValue(HISTORY_2_VALUE, "");
				radioButtonTag->Checked			=  Boolean::Parse((String ^) appKey->GetValue(RADIO_TAG_NUMBER_VALUE, "True"));
				textBoxTagNumber->Text			=                 (String ^) appKey->GetValue(TAG_NUMBER_VALUE, "");
				textBoxTagNumberTo->Text		=                 (String ^) appKey->GetValue(TAG_NUMBER_TO_VALUE, "");
				radioButtonIssue->Checked		=  Boolean::Parse((String ^) appKey->GetValue(RADIO_ISSUE_NUMBER_VALUE, "False"));
				textBoxIssueNumber->Text		=                 (String ^) appKey->GetValue(ISSUE_NUMBER_VALUE, "");

				checkBoxHistoryMode->Checked	=  Boolean::Parse((String ^) appKey->GetValue(HISTORY_MODE_VALUE, "False"));
				checkBoxAdded->Checked			=  Boolean::Parse((String ^) appKey->GetValue(ENABLE_ADDED_VALUE, "True"));
				checkBoxDeleted->Checked		=  Boolean::Parse((String ^) appKey->GetValue(ENABLE_DELETED_VALUE, "False"));
				checkBoxModified->Checked		=  Boolean::Parse((String ^) appKey->GetValue(ENABLE_MODIFIED_VALUE, "True"));
				//
				// Remove all tagpages
				//
				this->tabControl1->Controls->Remove(this->tabPageIssues);
				this->tabControl1->Controls->Remove(this->tabPageLog);
				this->tabControl1->Controls->Remove(this->tabPageAdded);
				this->tabControl1->Controls->Remove(this->tabPageDeleted);
				this->tabControl1->Controls->Remove(this->tabPageModified);
				this->tabControl1->Controls->Remove(this->tabPageOverridden);
				this->tabControl1->Controls->Remove(this->tabPageProject);
				this->tabControl1->Controls->Remove(this->tabPageReference);
				CheckHistoryMode();
				//
				// Restore form layout
				//
				formLocation.X                  =				    (Int32) appKey->GetValue(FORM_LOCATION_X_VALUE, this->Location.X);
				formLocation.Y                  =					(Int32) appKey->GetValue(FORM_LOCATION_Y_VALUE, this->Location.Y);
				formSize.Width                  =					(Int32) appKey->GetValue(FORM_SIZE_WIDTH_VALUE, this->MinimumSize.Width);
				formSize.Height                 =					(Int32) appKey->GetValue(FORM_SIZE_HEIGHT_VALUE, this->MinimumSize.Height);
				formWindowState                 =  (FormWindowState)(Int32) appKey->GetValue(FORM_SIZE_WINDOWSTATE_VALUE, this->WindowState);
			 }

	private: System::Void checkedListBoxAll(System::Windows::Forms::CheckedListBox^ checkedListBox) {
				for(int i = 0; i < checkedListBox->Items->Count; i++)
					checkedListBox->SetItemChecked (i, true);
			 }

	private: System::Void checkedListBoxNone(System::Windows::Forms::CheckedListBox^ checkedListBox) {
				for(int i = 0; i < checkedListBox->Items->Count; i++)
					checkedListBox->SetItemChecked (i, false);
			 }

	private: bool checkedListBoxOverride(System::Windows::Forms::CheckedListBox^ checkedListBox, System::Windows::Forms::Button^ buttonOverridden) {
				 bool SelectOverridden = (String::Compare(buttonOverridden->Text, "Override") == 0);
				 //
				 // Set Check State according to button currect state
				 //
				 for(int i = 0; i < checkedListBox->Items->Count; i++) {
					 if (checkedListBox->Items[i]->ToString()->Contains(OVERRIDE_MARK_STRING) ) {
						checkedListBox->SetItemChecked (i, SelectOverridden);
					 } else {
						checkedListBox->SetItemChecked (i, !SelectOverridden);
					 }
				 }
				 //
				 // Invert functions of buttons
				 //
				 buttonOverridden->Text = SelectOverridden ? "!Override" : "Override";
				 return SelectOverridden;
			 }

	private: bool checkedListBoxProjectOverride(System::Windows::Forms::CheckedListBox^ checkedListBox, System::Windows::Forms::Button^ buttonOverridden) {
				 bool SelectOverridden = (String::Compare(buttonProjectOverriddenModified->Text, "Project Overridden") == 0);
				 String ^projectFolder = textBoxProjectPlatform->Text->Substring(comboBoxProjectProject->Text->Length+1);
				 //
				 // Set Check State according to button currect state
				 //
				 for(int i = 0; i < checkedListBox->Items->Count; i++) {
					 if (checkedListBox->Items[i]->ToString()->Contains(projectFolder) ) {
						checkedListBox->SetItemChecked (i, SelectOverridden);
					 } else {
						checkedListBox->SetItemChecked (i, !SelectOverridden);
					 }
				 }
				 //
				 // Invert functions of buttons
				 //
				 buttonProjectOverriddenModified->Text = SelectOverridden ? "!Project Overridden" : "Project Overridden";
				 return SelectOverridden;
			 }

	private: System::Void UpdateComboBox(System::Windows::Forms::ComboBox ^comboBox, String ^str, bool insert) {
				int index;
				if (insert) {
					index = comboBox->FindStringExact(str);
				} else {
					index = comboBox->FindString(str);
				}
				if ( index == -1) {
					if (insert) {
						comboBox->Items->Insert(0, str);
						comboBox->SelectedIndex = 0;
					} else {
						comboBox->Text = "";
					}
				} else {
					comboBox->SelectedIndex = index;
					comboBox->Items->Insert(0, comboBox->SelectedItem);
					comboBox->Items->RemoveAt(comboBox->SelectedIndex);
					comboBox->SelectedIndex = 0;
				}
			 }

	private: System::Void copySelectedFilesComboBox(System::Windows::Forms::CheckedListBox ^checkedListBox, int SelectedIndex, String^ folder) {
				 //
				 // Initialize progress bar
				 //
				 toolStripProgressBar1->Maximum = checkedListBox->CheckedItems->Count;
				 toolStripProgressBar1->Value = 0;
				 //
				 // Initialize name of sub-folder out from Tag# & Issue#
				 //
				 String^ SubDir="";
				 if (SelectedIndex>0) {
					 SubDir = listBoxIssue->SelectedItem->ToString()->Substring(0,14);
					 for (int i=0; i<arrayFileLog->Length; i++) {
						 if ( arrayFileLog[i]->IssueNumber == SubDir) {
							 SubDir = arrayFileLog[i]->IssueIndex.ToString("000") + "." + SubDir;
							 break;
						 }
					 }
				 }
				 String ^TgtFolder = Path::Combine(folder, SubDir);
				 //
				 // Copy
				 //
				 copySelectedFiles(checkedListBox, TgtFolder);
				 MessageBox::Show("Finish copying " + toolStripProgressBar1->Maximum.ToString() + " files to "+ TgtFolder +" ! ");
			 }

	private: System::Void copySelectedFiles(System::Windows::Forms::CheckedListBox^ checkedListBox, String^ dirPathTgt) {
				String ^delimStr = " \t";
				array <Char>^delimiter = delimStr->ToCharArray();
				//
				// Loop copying files
				//
				for (int i=checkedListBox->Items->Count-1; i>=0; i--) {
					//
					// Is it a checked item?
					//
					if (!checkedListBox->GetItemChecked(i))
						continue;
					//
					// make original file path
					//
					checkedListBox->SelectedIndex = i;
					array <String^>^split = checkedListBox->SelectedItem->ToString()->Split(delimiter, 5, StringSplitOptions::RemoveEmptyEntries);
					String ^filePathRef = Path::Combine(comboBoxReferenceProject->Text, split[0]);
					//
					// Make target file path
					//
					String ^filePathTgt;
					if (split->Length<3) {
						filePathTgt = split[0];
					} else {
						filePathTgt = split[2];
					}
					//
					// Remove item in checkBox anyway.
					//
					checkedListBox->Items->RemoveAt(i);
					//
					// If original file exist?
					//
					if (File::Exists(filePathRef)) {
						//
						// Copy file!
						//
						CopyFileCreateDirectory(dirPathTgt, filePathTgt, filePathRef);
					}
					//
					// Update progress bar
					//
					toolStripProgressBar1->PerformStep();
				}
			 }

	private: System::Void deleteEmptyTree(String^ folder) {
				 array<String^>^ dir = Directory::GetDirectories( folder );
				 array<String^>^ file = Directory::GetFiles( folder);
				 if (file->Length==0 && dir->Length==0) {
					 Directory::Delete(folder);
					 deleteEmptyTree(Path::GetDirectoryName(folder));
				 }
			 }

	private: System::Void deleteSelectedFiles(System::Windows::Forms::CheckedListBox^ checkedListBox, String^ dirPathTgt) {
				String ^delimStr = " \t";
				array <Char>^delimiter = delimStr->ToCharArray();
				//
				// Loop selected files
				//
				for (int i=checkedListBox->Items->Count-1; i>=0; i--) {
					//
					// Is it a checked item?
					//
					if (!checkedListBox->GetItemChecked(i))
						continue;
					//
					// make original file path
					//
					checkedListBox->SelectedIndex = i;
					array <String^>^split = checkedListBox->SelectedItem->ToString()->Split(delimiter, 5, StringSplitOptions::RemoveEmptyEntries);
					//
					// Make target file path
					//
					String ^filePathTgt;
					if (split->Length<3) {
						filePathTgt = split[0];
					} else {
						filePathTgt = split[2];
					}
					filePathTgt = Path::Combine(dirPathTgt, filePathTgt);
					//
					// Remove item in checkBox anyway.
					//
					checkedListBox->Items->RemoveAt(i);
					//
					// If original file exist?
					//
					if (File::Exists(filePathTgt)) {
						//
						// Delete file & empty tree recursively
						//
						File::Delete(filePathTgt);
						deleteEmptyTree(Path::GetDirectoryName(filePathTgt));
					}
					//
					// Update progress bar
					//
					toolStripProgressBar1->PerformStep();
				}
			 }

	private: array <Overrider::OverrideDsc^>^ parseOverrideList(String ^EfiSource, String^ overrideList) {
				 if (!File::Exists(overrideList)) return nullptr;
				 StreamReader ^OverrideListFile = gcnew StreamReader(overrideList);
				 String ^OverrideDsc;
				 array <Overrider::OverrideDsc^>^arrayLocal = gcnew array <Overrider::OverrideDsc^>(MAX_DESCRIPTION);
				 OverrideListFile->BaseStream->Seek(0, SeekOrigin::Begin);
				 int count=0;
				 String ^delimStr = " \t";
				 String ^fullOriginal;
				 String ^fullOverride;
				 array <Char>^delimiter = delimStr->ToCharArray();
				 while ((OverrideDsc = OverrideListFile->ReadLine()) != nullptr) {
					 array <String^>^split = OverrideDsc->Split(delimiter, 2, StringSplitOptions::RemoveEmptyEntries);
					 if (split->Length < 2) continue;
					 if ((String::Compare(split[0], "X64") == 0) || (String::Compare(split[0], "IA32") == 0)) continue;
					 fullOriginal = Path::GetFullPath(Path::Combine(EfiSource, split[0]));
					 fullOverride = Path::GetFullPath(Path::Combine(EfiSource, split[1]));
					 //if (File::Exists(fullOriginal)) {
						 arrayLocal[count] = gcnew Overrider::OverrideDsc();
						 arrayLocal[count]->ODOriginal = fullOriginal->Substring(EfiSource->Length + sizeof(Path::DirectorySeparatorChar)/sizeof(wchar_t));
						 arrayLocal[count]->ODOverride = fullOverride->Substring(EfiSource->Length + sizeof(Path::DirectorySeparatorChar)/sizeof(wchar_t));
						 count++;
					 //}
				 }
				 OverrideListFile->Close();

				 Array::Resize(arrayLocal, count);
				 return arrayLocal;
			 }

	//private: array <Overrider::OverrideDsc^>^ abstractPlatformCode(array <Overrider::OverrideDsc^>^ OLReference) {
	//			 array <Overrider::OverrideDsc^>^arrayLocal = gcnew array <Overrider::OverrideDsc^>(OLReference->Length);
	//			 //String ^anchorPlatform = "platform" + Path::DirectorySeparatorChar;
	//			 //String ^anchorChipsetPlatform = "chipset" + Path::DirectorySeparatorChar + "platformlib" + Path::DirectorySeparatorChar;
	//			 int count=0;
	//			 for (int i=0; i<OLReference->Length; i++) {
	//				 String ^lowerOverride = OLReference[i]->ODOverride->ToLower();
	//				 if (lowerOverride->Contains(Path::DirectorySeparatorChar + "modfw" + Path::DirectorySeparatorChar)) {
	//					 continue;
	//				 }
	//				 //String ^lowerOriginal = OLReference[i]->ODOriginal->ToLower();
	//				 //if (lowerOriginal->Contains(anchorPlatform) || lowerOriginal->Contains(anchorChipsetPlatform)) {
	//					// arrayLocal[count] = gcnew Overrider::OverrideDsc();
	//					// arrayLocal[count] = OLReference[i];
	//					// count++;
	//				 //}
	//			 }
	//			 Array::Resize(arrayLocal, count);
	//			 return arrayLocal;
	//		 }

	private: System::Void markMultipleModifiedFiles(void) {
				 for (int i=0; i<arrayFileLog->Length-1; i++) {
					 if (arrayFileLog[i]->ODMode != Modified) continue;
					 for (int j=i+1, k=1; j<arrayFileLog->Length; j++) {
						 if (arrayFileLog[j]->DuplicateNumber>0) {
							 continue;
						 }
						 //if ((String::Compare(arrayFileLog[i]->ODOriginal,  arrayFileLog[j]->ODOriginal)  == 0) &&
							// (String::Compare(arrayFileLog[i]->IssueNumber, arrayFileLog[j]->IssueNumber) != 0)) {
						 if ((String::Compare(arrayFileLog[i]->ODOriginal,  arrayFileLog[j]->ODOriginal)  == 0)) {
							 //if (String::Compare(arrayFileLog[i]->IssueNumber, arrayFileLog[j]->IssueNumber) != 0) {
							 if (k==1) {
								 arrayFileLog[i]->DuplicateNumber=k++;
							 }
							 arrayFileLog[j]->DuplicateNumber=k++;
							 //} else {
								// continue;
							 //}
						 }
					 }
				 }
			 }

	private: int removeFileLog(int index) {
				 int j;
				 for (j=index; j<arrayFileLog->Length-1; j++) {
					 arrayFileLog[j] = arrayFileLog[j+1];
				 }
				 Array::Resize(arrayFileLog, j);
				 index--;
				 return index;
			 }

	private: System::Void processPlatformCode(void) {
				 for (int i=0; i<arrayFileLog->Length; i++) {
					 //
					 // Skip Overridden files
					 //
					 if (!String::IsNullOrEmpty(arrayFileLog[i]->ODOverride))
						 continue;
					 //
					 // Skip non-Platform files
					 //
					 String ^projectFolder = textBoxReferencePlatform->Text->Substring(comboBoxReferenceProject->Text->Length+1);
					 if (isPlatformCode(arrayFileLog[i]->ODOriginal, projectFolder)) {
						 //
						 // Process Modified files
						 //
						 if (arrayFileLog[i]->ODMode == Modified) {
							 //
							 // is it a implict Project override? Search for implict overriding file
							 //
							 arrayFileLog[i]->ODOverride = SearchPlatformOverride(arrayFileLog[i]->ODOriginal);
							 //
							 // delete if not a Project overridden file
							 //
							 if (String::IsNullOrEmpty(arrayFileLog[i]->ODOverride)) {
								 //i=removeFileLog(i);
							 }
						 } else if (arrayFileLog[i]->ODMode == Added) {
							 //
							 // Swap to Project folder for Added & Deleted files
							 //
							 arrayFileLog[i]->ODOverride = SwapToProjectPlatform(arrayFileLog[i]->ODOriginal);
						 }
					 }
				 }
			 }

	private: String ^LogLineCrLf(String^ LogLine)  {
				 if (LogLine->Length > POSTFIX_LENGTH_HISTORY_LINE) {
					 return (LogLine->Substring(POSTFIX_LENGTH_HISTORY_LINE) + "\r\n");
				 } else {
					 return ("\r\n");
				 }
			 }

			 
	private: System::Void uniqFileWithSameIssueNumber(void) {
			 }

	private: System::Void addLogOfHistoryAndTag(void) {
				 //if (arrayIssueLog->Length == 0) return;
				 //
				 // Resize array to add 2 Issue Logs
				 //
				 Array::Resize(arrayIssueLog, arrayIssueLog->Length + 2);
				 arrayIssueLog[arrayIssueLog->Length-2] = gcnew Overrider::LogOfIssue();
				 arrayIssueLog[arrayIssueLog->Length-1] = gcnew Overrider::LogOfIssue();
				 //
				 // Resize array to add a File Log
				 //
				 Array::Resize(arrayFileLog, arrayFileLog->Length + 1);
				 arrayFileLog[arrayFileLog->Length-1] = gcnew Overrider::LogOfFile();
				 //
				 // append File Log of Hisotry
				 //
				 int fileIndex = arrayFileLog->Length-1;
				 arrayFileLog[fileIndex]->ODOriginal = textBoxHistoryC->Text->Substring(comboBoxReferenceProject->Text->Length + sizeof(Path::DirectorySeparatorChar)/sizeof(wchar_t));
				 arrayFileLog[fileIndex]->ODMode = Modified;
				 arrayFileLog[fileIndex]->IssueIndex = arrayIssueLog->Length-2;
				 //
				 // append Issue Log of History
				 //
				 int issueIndex = arrayIssueLog->Length-2;
				 arrayIssueLog[issueIndex]->IssueIndex = issueIndex;
				 arrayIssueLog[issueIndex]->IssueNumber = "LogHistory";
				 arrayIssueLog[issueIndex]->LogText = "Auto generated for Reference History update";
				 //
				 // append issue log of Tag
				 //
				 issueIndex++;
				 arrayIssueLog[issueIndex]->IssueIndex = issueIndex;
				 arrayIssueLog[issueIndex]->IssueNumber = textBoxTagNumber->Text;
				 if (!String::IsNullOrEmpty(textBoxTagNumberTo->Text)) {
					 arrayIssueLog[issueIndex]->IssueNumber += ("-" + textBoxTagNumberTo->Text);
				 }
				 ////
				 //// Open History for reset
				 ////
				 //StreamReader ^HistoryFile = gcnew StreamReader(textBoxHistoryC->Text);
				 //String ^strLine;
				 //int LineNumber=0;
				 //while ((strLine = HistoryFile->ReadLine()) != nullptr) {
					// LineNumber++;
					// if (LineNumber >= TagBeginLineNumber) {
					//	 arrayIssueLog[arrayIssueLog->Length-1]->LogText = LogLineCrLf(strLine);
					//	 break;
					// }
				 //}
				 //while ((strLine = HistoryFile->ReadLine()) != nullptr) {
					// arrayIssueLog[arrayIssueLog->Length-1]->LogText += LogLineCrLf(strLine);
					// if (LineNumber++ >= TagEndLineNumber) {
					//	 break;
					// }
				 //}
				 ////
				 //// Close history
				 ////
				 //HistoryFile->Close();
				 //
				 //
				 //
				 for (int i=0; i< arrayIssueLog->Length-2; i++) {
					 arrayIssueLog[arrayIssueLog->Length-1]->LogText += arrayIssueLog[i]->LogText;
				 }
			 }

	private: System::Void removeLogOfHistoryNotOverridden(void) {
				 //if (arrayIssueLog->Length == 0) return;
				 if (String::IsNullOrEmpty(arrayFileLog[arrayFileLog->Length-1]->ODOverride)) {
					 //
					 // Remove File Log of History
					 //
					 Array::Resize(arrayFileLog, arrayFileLog->Length-1);
					 //
					 // Remove Issue Log of History
					 //
					 arrayIssueLog[arrayIssueLog->Length-2] = arrayIssueLog[arrayIssueLog->Length-1];
					 Array::Resize(arrayIssueLog, arrayIssueLog->Length-1);
				 }
			 }

	//private: System::Void originalFileLog(array <Overrider::OverrideDsc^>^ overrideList) {
	//			 //array <Overrider::LogOfFile^>^ arrayLocalFileLog;
	//			 //arrayLocalFileLog = gcnew array <Overrider::LogOfFile^>(arrayFileLog->Length);
	//			 //int count = 0;
	//			 int i,j;
	//			 for (i=0; i<arrayFileLog->Length; i++) {
	//				 //
	//				 // Add a override file for project if needed
	//				 //
	//				 if (String::IsNullOrEmpty(arrayFileLog[i]->ODOverride)) {
	//					 //int k;
	//					 ////
	//					 //// search origianl file
	//					 ////
	//					 //for (k=0; k<overrideList->Length; k++) {
	//						// if (overrideList[k]->ODOverride->CompareTo(arrayFileLog[i]->ODOriginal)==0) break;
	//					 //}
	//					 ////
	//					 //// revert original file if overridden found
	//					 ////
	//					 //if (k<overrideList->Length) {
	//						// //
	//						// // Skip Platform files
	//						// //
	//						// String^ SwapOverrideFile = SwapToProjectPlatform(overrideList[k]->ODOriginal);
	//						// if (String::Compare(overrideList[k]->ODOriginal, SwapOverrideFile) == 0) {
	//						//	 //
	//						//	 //
	//						//	 //
	//						//	 arrayLocalFileLog[count] = gcnew Overrider::LogOfFile();
	//						//	 arrayLocalFileLog[count]->ODOverride = SwapToProjectPlatform(overrideList[k]->ODOverride);
	//						//	 arrayLocalFileLog[count]->ODOriginal = overrideList[k]->ODOriginal;
	//						//	 arrayLocalFileLog[count]->IssueNumber = arrayFileLog[i]->IssueNumber;
	//						//	 arrayLocalFileLog[count]->IssueIndex = arrayFileLog[i]->IssueIndex;
	//						//	 arrayLocalFileLog[count]->ODMode = Added;

	//						//	 if (String::IsNullOrEmpty(arrayFileLog[i]->ODOverride)) {
	//						//		 arrayFileLog[i]->ODOverride = arrayLocalFileLog[count]->ODOverride;
	//						//	 }
	//						//	 arrayFileLog[i]->ODMode = Modified;

	//						//	 count++;
	//						// }
	//					 //}
	//					 continue;
	//				 }
	//				 //
	//				 // override origianl file according to override list of Reference code base
	//				 //
	//				 j = overrideList->BinarySearch(overrideList, (Overrider::OverrideDsc^)arrayFileLog[i]);
	//				 if (j >= 0) {
	//					 arrayFileLog[i]->ODOriginal = overrideList[j]->ODOverride;
	//				 }
	//			 }
	//			 //if (count > 0) {
	//				// Array::Resize(arrayFileLog, arrayFileLog->Length + count);
	//				// for (int i=arrayFileLog->Length-count, j=0; j<count; i++, j++) {
	//				//	 arrayFileLog[i] = arrayLocalFileLog[j];
	//				// }
	//			 //}
	//		 }

	private: System::Void overrideFileLog(array <Overrider::OverrideDsc^>^ overrideList) {
				 int i,j;
				 for (i=0; i<arrayFileLog->Length; i++) {
					 if (String::IsNullOrEmpty(arrayFileLog[i]->ODOverride)) {
						 j = overrideList->BinarySearch(overrideList, (Overrider::OverrideDsc^)arrayFileLog[i]);
						 if (j >= 0) {
							 arrayFileLog[i]->ODOverride = overrideList[j]->ODOverride;
						 }
					 }
				 }
			 }

	private: array <Overrider::OverrideDsc^>^ parseEffectiveOverrideList(array <Overrider::OverrideDsc^>^ OLProject, array <Overrider::OverrideDsc^>^ OLReference) {
				 array <Overrider::OverrideDsc^>^arrayLocal = gcnew array <Overrider::OverrideDsc^>(OLProject->Length + OLReference->Length);
				 for (int i=0; i<OLProject->Length + OLReference->Length; i++) {
					 arrayLocal[i] = gcnew Overrider::OverrideDsc();
				 }
				 int count=0;
				 for (int i=0, j; i<OLProject->Length; i++) {
					 arrayLocal[count++] = OLProject[i];
					 j = OLReference->BinarySearch(OLReference, OLProject[i]);
					 if (j >= 0) {
						 if (OLProject[i]->ODOverride->CompareTo(OLReference[j]->ODOverride) != 0) {
							 arrayLocal[count]->ODOriginal = OLReference[j]->ODOverride;
							 arrayLocal[count]->ODOverride = OLProject[i]->ODOverride;
							 count++;
						 }
					 }
				 }
				 Array::Resize(arrayLocal, count);
				 return arrayLocal;
			 }

	private: String^ tagFromHistory(String^ filename) {
				 if (String::IsNullOrEmpty(filename)) return nullptr;
				 StreamReader ^HistoryFile = gcnew StreamReader(filename);
				 String ^strLine;
				 String ^anchorStr = "Label#:";
				 String ^strTag = nullptr;
				 int i;
				 while ((strLine = HistoryFile->ReadLine()) != nullptr) {
					 if ((i = strLine->IndexOf(anchorStr)) != -1) {
						 String^ strCurrentTagNumber = strLine->Substring(i+anchorStr->Length)->Trim();
						 //int k = strCurrentTagNumber->Length;
						 //int j = strCurrentTagNumber->LastIndexOf('.');
						 //if (k-j-1 == 4) {
							// strTag = strCurrentTagNumber->Substring(j + 2);
						 //} else {
							// strTag = strCurrentTagNumber;
						 //}
						 strTag = strCurrentTagNumber;
						 break;
					 }
				 }
				 if (!String::IsNullOrEmpty(strTag)) {
					 return strTag;
				 }

				 HistoryFile->BaseStream->Seek(0, SeekOrigin::Begin);
				 anchorStr = "Tag#:";
				 while ((strLine = HistoryFile->ReadLine()) != nullptr) {
					 if ((i = strLine->IndexOf(anchorStr)) != -1) {
						 String^ strCurrentTagNumber = strLine->Substring(i+anchorStr->Length)->Trim();
						 //int k = strCurrentTagNumber->Length;
						 //int j = strCurrentTagNumber->LastIndexOf('.');
						 //if (k-j-1 == 4) {
							// strTag = strCurrentTagNumber->Substring(j + 2);
						 //} else {
							// strTag = strCurrentTagNumber;
						 //}
						 strTag = strCurrentTagNumber;
						 break;
					 }
				 }
				 HistoryFile->Close();

				 return strTag;
			 }

	private: String^ tagFromHistoryTag(String^ filename) {
				 if (String::IsNullOrEmpty(filename)) return nullptr;
				 StreamReader ^HistoryFile = gcnew StreamReader(filename);
				 String ^strLine;
				 String ^strTag = nullptr;
				 int i;
				 while ((strLine = HistoryFile->ReadLine()) != nullptr) {
					 if ((i = strLine->IndexOf(ANCHOR_LABEL)) != -1) {
						 String^ strCurrentTagNumber = strLine->Substring(i+sizeof(ANCHOR_LABEL))->Trim();
						 int k = strCurrentTagNumber->Length;
						 int j = strCurrentTagNumber->LastIndexOf('.');
						 if (k-j-1 == 4) {
							 strTag = strCurrentTagNumber->Substring(j + 2);
						 } else {
							 strTag = strCurrentTagNumber;
						 }
						 break;
					 }
				 }
				 HistoryFile->Close();

				 return strTag;
			 }

	//private: String ^searchPlatformOverrideInProject(String ^fullFilePathRef, String ^ReferenceFolder) {
	//			 String ^OverrideFile = nullptr;
	//			 //
	//			 // Is it a platform code of reference?
	//			 //
	//			 if (fullFilePathRef->Contains(ReferenceFolder)) {
	//				 //
	//				 // 1. check Project file exist in Project code base
	//				 //
	//				 String ^relativeFilePath = fullFilePathRef->Substring(ReferenceFolder->Length + sizeof(Path::DirectorySeparatorChar)/sizeof(wchar_t));
	//				 String ^fullFilePathProject = Path::Combine(comboBoxProjectProject->Text, relativeFilePath);
	//				 if (File::Exists(fullFilePathProject)) {
	//					 OverrideFile = fullFilePathProject->Substring(comboBoxProjectProject->Text->Length + sizeof(Path::DirectorySeparatorChar)/sizeof(wchar_t));
	//					 return OverrideFile;
	//				 }
	//				 //
	//				 // 2. check coreponsive Platform file exist in Project code base?
	//				 //
	//				 fullFilePathProject = Path::Combine(textBoxProjectPlatform->Text, relativeFilePath);
	//				 if (File::Exists(fullFilePathProject)) {
	//					 OverrideFile = fullFilePathProject->Substring(comboBoxProjectProject->Text->Length + sizeof(Path::DirectorySeparatorChar)/sizeof(wchar_t));
	//				 }
	//			 }
	//			 return OverrideFile;
	//		 }

	private: String ^SearchPlatformOverride(String ^refPath) {
				 if (String::IsNullOrEmpty(refPath)) {
					 return nullptr;
				 }

				 String ^prjFolder = textBoxProjectPlatform->Text->Substring(comboBoxProjectProject->Text->Length+1);
				 String ^refFolder = textBoxReferencePlatform->Text->Substring(comboBoxReferenceProject->Text->Length+1);

				 String ^OverridePath = nullptr;
				 //if (String::Compare(refPath, 0, textBoxReferencePlatform->Text, 0 , textBoxReferencePlatform->Text->Length, true) == 0) {
				 //if (String::Compare(refPath, 0, textBoxReferencePlatform->Text, comboBoxReferenceProject->Text->Length+1 , textBoxReferencePlatform->Text->Length - comboBoxReferenceProject->Text->Length - 1, true) == 0) {
				 if (refPath->Contains(refFolder)) {
					 OverridePath = refPath->Replace(refFolder, prjFolder);
					 if (!File::Exists(Path::Combine(comboBoxProjectProject->Text, OverridePath))) {
						 //OverridePath = refPath->Replace(textBoxReferencePlatform->Text, textBoxProjectPlatform->Text);
						 //if (!File::Exists(Path::Combine(comboBoxProjectProject->Text, OverridePath))) {
							 OverridePath = nullptr;
						 //}
					 }
				 //} else if (String::Compare(refPath, 0, textBoxReferencePlatform->Text, 0 , textBoxReferencePlatform->Text->Length, true) == 0) {
					// OverridePath = refPath->Replace(textBoxReferencePlatform->Text, textBoxProjectPlatform->Text);
					// if (!File::Exists(Path::Combine(comboBoxProjectProject->Text, OverridePath))) {
					//	 OverridePath = refPath->Replace(textBoxReferencePlatform->Text, textBoxProjectPlatform->Text);
					//	 if (!File::Exists(Path::Combine(comboBoxProjectProject->Text, OverridePath))) {
					//		 OverridePath = nullptr;
					//	 }
					// }
				 //} else if (String::Compare(refPath, 0, textBoxReferencePlatform->TextLibDir, 0 , textBoxReferencePlatform->TextLibDir->Length, true) == 0) {
					// OverridePath = refPath->Replace(textBoxReferencePlatform->TextLibDir, textBoxProjectPlatform->TextLibDir);
				 //} else {
					// OverridePath = nullptr;
					 //String ^ReferencePlatform = Path::GetFileName(textBoxReferencePlatform->Text);
					 //if (refPath->ToLower()->Contains(ReferencePlatform->ToLower())) {
						// String ^ProjectPlatform   = Path::GetFileName(textBoxProjectPlatform->Text);
						// OverridePath = refPath->Replace(ReferencePlatform, ProjectPlatform)->Substring(comboBoxReferenceProject->Text->Length + sizeof(Path::DirectorySeparatorChar)/sizeof(wchar_t));
					 //}
				 }
				 return OverridePath;
			 }

	private: bool isPlatformCode(String ^filePath, System::String^ pfs) {
				 if (String::IsNullOrEmpty(filePath))
					 return false;
				 if (filePath->ToLower()->Contains(pfs->ToLower())) {
					 return true;
				 }
				 return false;
			 }

	private: System::String ^SwapToProjectPlatform( System::String ^refPath) {
				 if (String::IsNullOrEmpty(refPath)) {
					 return refPath;
				 }
				 String ^OverridePath;
				 String ^prjFolder = textBoxProjectPlatform->Text->Substring(comboBoxProjectProject->Text->Length+1);
				 String ^refFolder = textBoxReferencePlatform->Text->Substring(comboBoxReferenceProject->Text->Length+1);
				 //if (String::Compare(refPath, 0, textBoxReferencePlatform->Text, 0 , textBoxReferencePlatform->Text->Length, true) == 0) {
				 if (refPath->Contains(refFolder)) {
					 OverridePath = refPath->Replace(refFolder, prjFolder);
				 //} else if (String::Compare(refPath, 0, textBoxReferencePlatform->Text, 0 , textBoxReferencePlatform->Text->Length, true) == 0) {
 				//	 OverridePath = refPath->Replace(textBoxReferencePlatform->Text, textBoxProjectPlatform->Text);
				 //} else if (String::Compare(refPath, 0, textBoxReferencePlatform->TextLibDir, 0 , textBoxReferencePlatform->TextLibDir->Length, true) == 0) {
					// OverridePath = refPath->Replace(textBoxReferencePlatform->TextLibDir, textBoxProjectPlatform->TextLibDir);
				 } else {
					 OverridePath = refPath;
				 }
				 return OverridePath;
			 }

	private: System::Void addFolderToHistoryTemp(String^ rootDirectoryName, String^ directoryName) {
				 if (!Directory::Exists(Path::Combine(rootDirectoryName, directoryName))) return;
				 array<String^>^ dir = Directory::GetDirectories( Path::Combine(rootDirectoryName, directoryName) );
				 array<String^>^ file = Directory::GetFiles( Path::Combine(rootDirectoryName, directoryName));
				 for (int i=0; i<file->Length; i++) {
					 arrayOriginalTemp[countOriginalTemp++] = file[i]->Substring(rootDirectoryName->Length + sizeof(Path::DirectorySeparatorChar)/sizeof(wchar_t));
				 }
				 for (int i=0; i<dir->Length; i++) {
					 addFolderToHistoryTemp(rootDirectoryName, dir[i]);
				 }
			 }

	private: System::Void addTreeToHistoryTemp(String^ rootDirectoryName, String^ directoryName) {
				 arrayOriginalTemp = gcnew array <String^>(MAX_DESCRIPTION);
				 countOriginalTemp = 0;
				 addFolderToHistoryTemp(rootDirectoryName, directoryName);
				 //
				 // Resize according to discovery
				 //
				 Array::Resize(arrayOriginalTemp, countOriginalTemp);
			 }

	private: System::String^ GetKernelNumberByCodeBaseClass(String^ strTagNumber, CbClass CodeBaseClass) {
				 String^ strKernelTagNumber = "";
				 switch (CodeBaseClass) {
					 case CcCRB:
						 if (strTagNumber->Length >= 8) {
							strKernelTagNumber = strTagNumber->Substring(0, 8);
						 }
						 break;
					 case CcFeature:
						 if (strTagNumber->Length >= 13) {
							strKernelTagNumber = strTagNumber->Substring(0, 13);
						 }
						 break;
				 }
				 return strKernelTagNumber;
			 }

	private: System::String^ GetTagNumberCodeBaseClass(String^ strTagNumber, CbClass CodeBaseClass) {
				 String ^strT = "";
				 switch (CodeBaseClass) {
					 case CcKernel:
						 if (strTagNumber->Length >= 8) {
							strT = strTagNumber->Substring(CcKernel, 8);
						 }
						 break;
					 case CcCRB:
						 if (strTagNumber->Length >= 13) {
							strT = strTagNumber->Substring(CcCRB, 3);
						 }
						 break;
					 case CcFeature:
						 if (strTagNumber->Length >= 18) {
							strT = strTagNumber->Substring(CcFeature, 4);
						 }
						 break;
				 }
				 return strT;
			 }

	private: System::String^ GetTagNumberAnchor(String^ strLine, String^ anchorStr, CbClass CodeBaseClass) {
				 int i = strLine->IndexOf(anchorStr);
				 if (i == -1) return ""; 
				 //String^ strCurrentTagNumber = strLine->Substring(i+anchorStr->Length)->Trim();

				 //return GetTagNumberCodeBaseClass(strCurrentTagNumber, CodeBaseClass);
				 return strLine->Substring(i+anchorStr->Length)->Trim();
			 }

	private: System::Void parseExistFilesFromHisotryByTagNumber(String^ StrHistory, String^ strTagFrom, String^ strTagTo) {
				 //
				 // Key words for analysis
				 //
				 //String ^strCurrentKernelNumber;
				 bool IsKernelUpdate = false;
				 CbClass CodeBaseClass = CcFeature;
				 //int TagBeginLineNumber;
				 //int TagEndLineNumber;
				 //
				 // invalid characters for path checking
				 //
				 array<Char>^ invalidPathChars = Path::GetInvalidPathChars();
				 array<Char>^ invalidFileChars = Path::GetInvalidFileNameChars();
				 //
				 //
				 //
				 switch (strTagFrom->Length) {
					 case 8:
						CodeBaseClass = CcKernel;
						break;
					 case 13:
						CodeBaseClass = CcCRB;
						break;
					 case 18:
						CodeBaseClass = CcFeature;
						break;
					 default:
						 CodeBaseClass = CcPlatform;
				 }
				 //
				 // Open file stream and prepare for analysis
				 //
				 StreamReader ^HistoryFile = gcnew StreamReader(StrHistory);
				 HistoryFile->BaseStream->Seek(0, SeekOrigin::Begin);
				 String ^strLine;
				 String ^IssueNumber;
				 int LineNumber=0;
				 ODTransMode transMode;
				 int i;
				 bool inTagBlock = false;
				 //TagBeginLineNumber = -1;
				 //
				 // Clear tag number of kernel
				 //
				 String ^strBaseCodeTagFrom = GetKernelNumberByCodeBaseClass(strTagFrom, CodeBaseClass);
				 String ^strBaseCodeTagTo = GetKernelNumberByCodeBaseClass(strTagTo, CodeBaseClass);
				 String ^strBaseCodeTagCurrent;
				 //
				 // Major loop to analysize history content
				 //
				 while ((strLine = HistoryFile->ReadLine()) != nullptr) {
					 LineNumber++;
					 //
					 // Tag# Block
					 //
					 if (inTagBlock) {
						 //
						 // Reach to another Tag#/Lable#?
						 //
						 bool IsTag = true;
						 String^ strCurrentTagNumber = GetTagNumberAnchor(strLine, ANCHOR_TAG, CodeBaseClass);
						 if (String::IsNullOrEmpty(strCurrentTagNumber)) {
							 strCurrentTagNumber = GetTagNumberAnchor(strLine, ANCHOR_LABEL, CodeBaseClass);
							 if (!String::IsNullOrEmpty(strCurrentTagNumber)) {
								 IsTag = false;
							 }
						 }
						 if (!String::IsNullOrEmpty(strCurrentTagNumber)) {
							 //
							 // if this is the end of this Tag?
							 //
							 if (String::Compare(strTagFrom, strCurrentTagNumber) == 0) {
								 break;
							 }
							 if (!String::IsNullOrEmpty(strBaseCodeTagFrom)) {
								 strBaseCodeTagCurrent = GetKernelNumberByCodeBaseClass(strCurrentTagNumber, CodeBaseClass);
								 if (!String::IsNullOrEmpty(strBaseCodeTagCurrent) && !String::IsNullOrEmpty(strBaseCodeTagFrom)) {
									 if (String::Compare(strBaseCodeTagCurrent, strBaseCodeTagTo) != 0) {
										 switch (CodeBaseClass) {
											 case CcCRB:
												 parseExistFilesFromHisotryByTagNumber(textBoxHistoryK->Text, strBaseCodeTagCurrent, strBaseCodeTagTo);
												 break;
											 case CcFeature:
												 parseExistFilesFromHisotryByTagNumber(textBoxHistoryC->Text, strBaseCodeTagCurrent, strBaseCodeTagTo);
												 break;
										 }
										 strBaseCodeTagTo = strBaseCodeTagCurrent;
									 }
								 }
							 }
							 if (IsTag) {
								 mIssueIndex++;
								 arrayIssueLog[mIssueIndex]->LogText = LogLineCrLf(strLine);
							 }
							 continue;
						 }
						 //
						 // A new Issue#?
						 //
						 i = strLine->IndexOf(ANCHOR_ISSUE);
						 if (i != -1) {
							 IssueNumber =  strLine->Substring(i+sizeof(ANCHOR_ISSUE))->Trim();
							 arrayIssueLog[mIssueIndex]->IssueNumber = IssueNumber;
							 arrayIssueLog[mIssueIndex]->IssueIndex = mIssueIndex  ;
							 arrayIssueLog[mIssueIndex]->LogText += LogLineCrLf(strLine);
							 continue;
						 }
						 //
						 // File operation mode identifying
						 //
						 arrayIssueLog[mIssueIndex]->LogText += LogLineCrLf(strLine);
						 if (strLine->Contains(ANCHOR_ADDED) || strLine->Contains(ANCHOR_DELETED) || strLine->Contains(ANCHOR_MODIFIED)) {
							 if (strLine->Contains(ANCHOR_ADDED)) {
								 transMode = Added;
							 } else if (strLine->Contains(ANCHOR_DELETED)) {
								 transMode = Deleted;
							 } else if (strLine->Contains(ANCHOR_MODIFIED)) {
								 transMode = Modified;
							 }
							 //
							 // Loop for file identifying with operation mode
							 //
							 while ((strLine = HistoryFile->ReadLine()) != nullptr) {
								 arrayIssueLog[mIssueIndex]->LogText += LogLineCrLf(strLine);
								 LineNumber++;
								 //
								 // Another file operation mode?
								 //
								 if (strLine->Contains(ANCHOR_ADDED)) {
									 transMode = Added;
									 continue;
								 } else if (strLine->Contains(ANCHOR_DELETED)) {
									 transMode = Deleted;
									 continue;
								 } else if (strLine->Contains(ANCHOR_MODIFIED)) {
									 transMode = Modified;
									 continue;
								 }
								 //
								 // If a statement for a file operation?
								 //
								 int StartIndex = strLine->IndexOf(".");
								 if (StartIndex == -1) {
									 break;
								 } else {
									 //
									 // Identify a file with its operation mode
									 //
									 String ^relativeFilePath = strLine->Substring(StartIndex+1)->Trim();
									 int lastDirSeparator = relativeFilePath->LastIndexOf(Path::DirectorySeparatorChar);
									 //
									 // Check if it is a folder operation?
									 //
									 String ^fileName;
									 String ^directoryName = Path::GetDirectoryName(relativeFilePath);
									 if (directoryName->IndexOfAny(invalidPathChars) != -1)
										 continue;
									 if (lastDirSeparator == -1) {
										 fileName = relativeFilePath;
									 } else if (lastDirSeparator == relativeFilePath->Length - 1) {
										 //
										 // It is a folder, should not be supported
										 //
										 continue;
										 //fileName = "*.*";
									 } else {
										 fileName = Path::GetFileName(relativeFilePath);
									 }
									 //
									 // Add directory with wildcard description
									 //
									 if (String::Compare(fileName, "*.*") == 0) {
										 //
										 // It is a folder tree in description supported
										 //
										 if (transMode == Deleted) {
											 //
											 // ToDo: Delete tree after convert platform folder
											 //
											 if (Directory::Exists(Path::Combine(comboBoxProjectProject->Text, directoryName))) {
												 addTreeToHistoryTemp(comboBoxProjectProject->Text, SwapToProjectPlatform(directoryName));
											 }
										 } else {
											 //
											 // Add Tree
											 //
											 if (Directory::Exists(Path::Combine(comboBoxReferenceProject->Text, directoryName))) {
												 addTreeToHistoryTemp(comboBoxReferenceProject->Text, directoryName);
											 }
										 }
										 //
										 // Add expansion result to file log array
										 //
										 for (int i=0; i<countOriginalTemp; i++) {
											 arrayFileLog[mFileCount]->ODOriginal = arrayOriginalTemp[i];
											 arrayFileLog[mFileCount]->ODMode = transMode;
											 arrayFileLog[mFileCount]->IssueNumber = IssueNumber;
											 arrayFileLog[mFileCount]->IssueIndex = mIssueIndex  ;
											 mFileCount++;
										 }
										 //
										 // Skip following lines contain files under this tree branch
										 //
										 //while ((strLine = HistoryFile->ReadLine()) != nullptr) {
											// if (strLine->Contains()) {
											//	 LineNumber++;
											//	 continue;
											// } else {
											// }
										 //}
									 }
									 if (fileName->IndexOfAny(invalidFileChars) != -1) continue;
									 //
									 // Need to add platform code support here for deleted files
									 //
									 String ^fullFilePathRef;
									 if ((transMode == Deleted)) {
										 relativeFilePath = SwapToProjectPlatform(relativeFilePath);
										 fullFilePathRef = Path::GetFullPath(Path::Combine(comboBoxProjectProject->Text, relativeFilePath));
									 } else {
										 fullFilePathRef = Path::GetFullPath(Path::Combine(comboBoxReferenceProject->Text, relativeFilePath));
									 }
									 if (File::Exists(fullFilePathRef)) {
										 arrayFileLog[mFileCount]->ODOriginal = relativeFilePath;
										 arrayFileLog[mFileCount]->ODMode = transMode;
										 arrayFileLog[mFileCount]->IssueNumber = IssueNumber;
										 arrayFileLog[mFileCount]->IssueIndex = mIssueIndex  ;
										 mFileCount++;
									 }
								 }
							 }
						 }
					 } else {
						 //
						 // checking for the beginning of a Tag# block
						 //
						 String^ strCurrentTagNumber = GetTagNumberAnchor(strLine, ANCHOR_TAG, CodeBaseClass);
						 if (!String::IsNullOrEmpty(strCurrentTagNumber)) {
							 if (String::Compare(GetTagNumberCodeBaseClass(strTagTo, CodeBaseClass), GetTagNumberCodeBaseClass(strCurrentTagNumber, CodeBaseClass)) == 0) {
								 inTagBlock = true;
								 mIssueIndex++;
								 arrayIssueLog[mIssueIndex]->LogText = LogLineCrLf(strLine);
								 strBaseCodeTagTo = GetKernelNumberByCodeBaseClass(strCurrentTagNumber, CodeBaseClass); 
							 }
						 }
					 }
				 }
				 //
				 // Close history
				 //
				 HistoryFile->Close();
				 ////
				 //// Increase a Issue for history
				 ////
				 //mIssueIndex++;
				 ////
				 //// Resize according to discovery
				 ////
				 //if (!IsKernelUpdate) {
					// Array::Resize(arrayIssueLog, mIssueIndex);
					// Array::Resize(arrayFileLog, mFileCount);
				 //}
			 }

	private: System::Void parseExistFilesFromHisotryByIssueNumber(void) {
				 //
				 // invalid characters for path checking
				 //
				 array<Char>^ invalidPathChars = Path::GetInvalidPathChars();
				 array<Char>^ invalidFileChars = Path::GetInvalidFileNameChars();
				 //
				 // initialize log arrays
				 //
				 arrayFileLog = gcnew array <Overrider::LogOfFile^>(MAX_DESCRIPTION);
				 for (int i=0; i<MAX_DESCRIPTION; i++) {
					 arrayFileLog[i] = gcnew Overrider::LogOfFile();
				 }
				 arrayIssueLog = gcnew array <Overrider::LogOfIssue^>(MAX_DESCRIPTION);
				 for (int i=0; i<MAX_DESCRIPTION; i++) {
					 arrayIssueLog[i] = gcnew Overrider::LogOfIssue();
				 }
				 //
				 // Open file stream and prepare for analysis
				 //
				 StreamReader ^HistoryFile = gcnew StreamReader(textBoxHistoryC->Text);
				 HistoryFile->BaseStream->Seek(0, SeekOrigin::Begin);
				 int count=0;
				 String ^strLine;
				 String ^IssueNumber;
				 int IssueIndex=-1;
				 int LineNumber=0;
				 ODTransMode transMode;
				 int i;
				 bool inIssueBlock = false;
				 int IssueBeginLineNumber;
				 int IssueEndLineNumber;
				 IssueBeginLineNumber = -1;
				 //
				 // Major loop to analysize history content
				 //
				 while ((strLine = HistoryFile->ReadLine()) != nullptr) {
					 LineNumber++;
					 //
					 // Tag# Block
					 //
					 if (inIssueBlock) {
						 //
						 // Reach to another Tag#?
						 //
						 i = strLine->IndexOf(ANCHOR_TAG);
						 if (i != -1) {
							 IssueEndLineNumber = LineNumber-2;
							 break;
						 }
						 //
						 // Reach to another Label#?
						 //
						 i = strLine->IndexOf(ANCHOR_LABEL);
						 if (i != -1) {
							 IssueEndLineNumber = LineNumber-2;
							 break;
						 }
						 //
						 // File operation mode identifying
						 //
						 arrayIssueLog[IssueIndex]->LogText += LogLineCrLf(strLine);
						 if (strLine->Contains(ANCHOR_ADDED) || strLine->Contains(ANCHOR_DELETED) || strLine->Contains(ANCHOR_MODIFIED)) {
							 if (strLine->Contains(ANCHOR_ADDED)) {
								 transMode = Added;
							 } else if (strLine->Contains(ANCHOR_DELETED)) {
								 transMode = Deleted;
							 } else if (strLine->Contains(ANCHOR_MODIFIED)) {
								 transMode = Modified;
							 }
							 //
							 // Loop for file identifying with operation mode
							 //
							 while ((strLine = HistoryFile->ReadLine()) != nullptr) {
								 arrayIssueLog[IssueIndex]->LogText += LogLineCrLf(strLine);
								 LineNumber++;
								 //
								 // Another file operation mode?
								 //
								 if (strLine->Contains(ANCHOR_ADDED)) {
									 transMode = Added;
									 continue;
								 } else if (strLine->Contains(ANCHOR_DELETED)) {
									 transMode = Deleted;
									 continue;
								 } else if (strLine->Contains(ANCHOR_MODIFIED)) {
									 transMode = Modified;
									 continue;
								 }
								 //
								 // If a statement for a file operation?
								 //
								 int StartIndex = strLine->IndexOf(".");
								 if (StartIndex == -1) {
									 break;
								 } else {
									 //
									 // Identify a file with its operation mode
									 //
									 String ^relativeFilePath = strLine->Substring(StartIndex+1)->Trim();
									 int lastDirSeparator = relativeFilePath->LastIndexOf(Path::DirectorySeparatorChar);
									 String ^fileName;
									 String ^directoryName = Path::GetDirectoryName(relativeFilePath);
									 if (directoryName->IndexOfAny(invalidPathChars) != -1)
										 continue;
									 if (lastDirSeparator == -1) {
										 fileName = relativeFilePath;
									 } else if (lastDirSeparator == relativeFilePath->Length - 1) {
										 //
										 // It is a folder tree in description not supported
										 //
										 continue;
										 //fileName = "*.*";
									 } else {
										 fileName = Path::GetFileName(relativeFilePath);
									 }
									 //
									 // Add directory with wildcard description
									 //
									 if (String::Compare(fileName, "*.*") == 0) {
										 //
										 // It is a folder tree in description supported
										 //
										 if (transMode == Deleted) {
											 //
											 // ToDo: Delete tree after convert platform folder
											 //
											 if (Directory::Exists(Path::Combine(comboBoxProjectProject->Text, directoryName))) {
												 addTreeToHistoryTemp(comboBoxProjectProject->Text, SwapToProjectPlatform(directoryName));
											 }
										 } else {
											 //
											 // Add Tree
											 //
											 if (Directory::Exists(Path::Combine(comboBoxReferenceProject->Text, directoryName))) {
												 addTreeToHistoryTemp(comboBoxReferenceProject->Text, directoryName);
											 }
										 }
										 //
										 // Add expansion result to file log array
										 //
										 for (int i=0; i<countOriginalTemp; i++) {
											 arrayFileLog[count]->ODOriginal = arrayOriginalTemp[i];
											 arrayFileLog[count]->ODMode = transMode;
											 arrayFileLog[count]->IssueNumber = IssueNumber;
											 arrayFileLog[count]->IssueIndex = IssueIndex  ;
											 count++;
										 }
										 continue;
									 }
									 if (fileName->IndexOfAny(invalidFileChars) != -1) continue;
									 //
									 // Need to add platform code support here for deleted files
									 //
									 String ^fullFilePathRef;
									 if ((transMode == Deleted)) {
										 relativeFilePath = SwapToProjectPlatform(relativeFilePath);
										 fullFilePathRef = Path::GetFullPath(Path::Combine(comboBoxProjectProject->Text, relativeFilePath));
									 } else {
										 fullFilePathRef = Path::GetFullPath(Path::Combine(comboBoxReferenceProject->Text, relativeFilePath));
									 }
									 if (File::Exists(fullFilePathRef)) {
										 arrayFileLog[count]->ODOriginal = relativeFilePath;
										 arrayFileLog[count]->ODMode = transMode;
										 arrayFileLog[count]->IssueNumber = IssueNumber;
										 arrayFileLog[count]->IssueIndex = IssueIndex  ;
										 count++;
									 }
								 }
							 }
						 }
					 } else {
						 //
						 // checking for the beginning of a Issue# block
						 //
						 i = strLine->IndexOf(ANCHOR_TAG);
						 if (i != -1) {
							 //TagBeginLineNumber = LineNumber;
							 arrayIssueLog[0]->LogText = LogLineCrLf(strLine);
						 } 
						 i = strLine->IndexOf(ANCHOR_ISSUE);
						 if (i != -1) {
							 if (String::Compare(textBoxIssueNumber->Text, strLine->Substring(i+sizeof(ANCHOR_ISSUE))->Trim()) == 0) {
								 inIssueBlock = true;
								 if (IssueBeginLineNumber <= 0) {
									 IssueBeginLineNumber = LineNumber - 1;
								 }
								 IssueIndex++;
								 arrayIssueLog[IssueIndex]->LogText += LogLineCrLf(strLine);
							 }
						 }
					 }
				 }
				 //
				 // Close history
				 //
				 HistoryFile->Close();
				 //
				 // Increase a Issue for history
				 //
				 IssueIndex++;
				 //
				 // Resize according to discovery
				 //
				 Array::Resize(arrayIssueLog, IssueIndex);
				 Array::Resize(arrayFileLog, count);
			 }

	private: array <Overrider::OverrideDsc^>^ uniqSortedArray(array <Overrider::OverrideDsc^>^ OverrideList) {
				 array <Overrider::OverrideDsc^>^arrayLocal = gcnew array <Overrider::OverrideDsc^>(OverrideList->Length);
				 for (int i=0; i<OverrideList->Length; i++) {
					 arrayLocal[i] = gcnew Overrider::OverrideDsc();
				 }
				 int count=0;
				 String^ temporiginalPath="";
				 for (int i=0; i<OverrideList->Length; i++) {
					 if (OverrideList[i]->ODOriginal->CompareTo(temporiginalPath) == 0) {
						 arrayLocal[count-1] = OverrideList[i];
						 continue;
					 }
					 temporiginalPath = OverrideList[i]->ODOriginal;
					 arrayLocal[count++] = OverrideList[i];
				 }
				 Array::Resize(arrayLocal, count);
				 return arrayLocal;
			 }

	private: bool SatisfyingInput(void) {
				 if (!Directory::Exists(comboBoxProjectProject->Text)) {
					 MessageBox::Show("Project Project folder does not exist");
					 comboBoxProjectProject->Focus();
					 return false;
				 }
				 if (!File::Exists(textBoxProjectOverrideList->Text)) {
					 MessageBox::Show("Override list of Project file does not exist");
					 textBoxProjectOverrideList->Focus();
					 return false;
				 }
				 if (!Directory::Exists(comboBoxReferenceProject->Text)) {
					 MessageBox::Show("Reference Project folder does not exist");
					 comboBoxReferenceProject->Focus();
					 return false;
				 }
				 if (!File::Exists(textBoxReferenceOverrideList->Text)) {
					 MessageBox::Show("Override list of Reference file does not exist");
					 textBoxReferenceOverrideList->Focus();
					 return false;
				 }
				 if (!File::Exists(textBoxHistoryC->Text)) {
					 MessageBox::Show("History file does not exist");
					 textBoxHistoryC->Focus();
					 return false;
				 }
				 if (radioButtonTag->Checked && (String::IsNullOrEmpty(textBoxTagNumber->Text))) {
					 MessageBox::Show("Assign a Tag number before action");
					 textBoxTagNumber->Focus();
					 return false;
				 }
				 if (radioButtonIssue->Checked && (String::IsNullOrEmpty(textBoxIssueNumber->Text))) {
					 MessageBox::Show("Assign a Issue number before action");
					 textBoxIssueNumber->Focus();
					 return false;
				 }

				 return true;
			 }

	//private: Overrider::PlatformFolders^ parsePlatformEnv(String^ projectFolder) {
	//			 Overrider::PlatformFolders^ pfs = gcnew Overrider::PlatformFolders();
	//			 String^ platformEnvFileName = Path::Combine(projectFolder, Path::Combine("build", "platform.env"));
	//			 if (!File::Exists(platformEnvFileName)) {
	//				 return pfs;
	//			 }

	//			 List <Symbol^>^ Symbols = gcnew List <Symbol^>();
	//			 String ^delimStr = " \t";
	//			 String ^EnvDsc;
	//			 array <Char>^delimiter = delimStr->ToCharArray();
	//			 array <String^>^split;
	//			 //
	//			 // read platform file
	//			 //
 //				 StreamReader ^platformEnvFile = gcnew StreamReader(platformEnvFileName);
	//			 while ((EnvDsc = platformEnvFile->ReadLine()) != nullptr) {
	//				 if (String::IsNullOrEmpty(EnvDsc->Trim())) continue;
	//				 if (String::Compare(EnvDsc->Trim()->Substring(0,1), "#") == 0) continue;
	//				 if (String::Compare(EnvDsc->Trim()->Substring(0,1), "!") == 0) continue;
	//				 if (!EnvDsc->Contains("=")) continue;
	//				 split = EnvDsc->Replace("=", " ")->Split(delimiter, 2, StringSplitOptions::RemoveEmptyEntries);
	//				 if (split->Length < 2) continue;
	//				 Symbol^ symbol = gcnew Symbol(split[0], split[1]);
	//				 if (Symbols->Contains(symbol)) {
	//					 Symbols->Remove(symbol);
	//				 }
	//				 Symbols->Add(symbol);
	//			 }
	//			 platformEnvFile->Close();
	//			 //
	//			 // parse names
	//			 //
	//			 int i;
	//			 for each(Symbol^ symbol in Symbols) {
	//				 while ((i = symbol->Value->IndexOf("$")) >= 0) {
	//					 String^ quoteName = symbol->Value->Substring(i, symbol->Value->IndexOf(")")-i+1);
	//					 String^ name = quoteName->Substring(2, quoteName->Length-3);
	//					 bool expanded = false;
	//					 for each(Symbol^ symbol2 in Symbols) {
	//						 if (symbol2->Name->CompareTo(name) == 0) {
	//							 symbol->Value = symbol->Value->Replace(quoteName, symbol2->Value);
	//							 expanded = true;
	//							 break;
	//						 }
	//					 }
	//					 if (!expanded) {
	//						 break;
	//					 }
	//				 }
	//			 }
	//			 //
	//			 // find platform folder names
	//			 //
	//			 for each(Symbol^ symbol in Symbols) {
	//				 if (symbol->Name->CompareTo("DEMOBOARD_FAMILY") == 0) {
	//					 pfs->Platform = symbol->Value;
	//					 break;
	//				 }
	//			 }
	//			 for each(Symbol^ symbol in Symbols) {
	//				 if (symbol->Name->CompareTo("DEMOBOARD_NAME") == 0) {
	//					 pfs->Platform = Path::Combine(pfs->Platform, symbol->Value);
	//					 break;
	//				 }
	//			 }
	//			 for each(Symbol^ symbol in Symbols) {
	//				 if (symbol->Name->CompareTo("PROJECT_FAMILY") == 0) {
	//					 pfs->Project = symbol->Value;
	//					 break;
	//				 }
	//			 }
	//			 for each(Symbol^ symbol in Symbols) {
	//				 if (symbol->Name->CompareTo("PROJECT_NAME") == 0) {
	//					 pfs->Project = Path::Combine(pfs->Project, symbol->Value);
	//					 break;
	//				 }
	//			 }
	//			 for each(Symbol^ symbol in Symbols) {
	//				 if (symbol->Name->CompareTo("PLATFORM_LIB_DIR") == 0) {
	//					 pfs->PlatformLibDir = symbol->Value;
	//					 break;
	//				 }
	//			 }
	//			 pfs->EfiSource = projectFolder->Substring(0, projectFolder->Length - pfs->Project->Length - 1);
	//			 return pfs;
	//		 }

	private: System::String ^stepVersion (System::String ^version, int step) {
				 array<Char>^arr;
				 arr = version->ToCharArray( 0, version->Length );

				 int i, j;
				 for (j=version->Length - 1; j>=0; j-- ) {
					 if (arr[j] >= L'0' && arr[j] <=L'9') {
						 break;
					 }
				 }
				 if (j<0) {
					 return version;
				 }
				 for (i=j - 1; i>=0; i-- ) {
					 if (arr[i] < L'0' || arr[i] >L'9') {
						 break;
					 }
				 }
				 String ^minorVersion = version->Substring(i + 1, j - i);
				 minorVersion->ToCharArray();
				 Int32 mv = Int32::Parse(minorVersion);
				 String ^format;
				 int overflow=1;
				 for (int j=0; j < version->Length - i - 1; j++) {
					 format += "0";
					 overflow *= 10;
				 }
				 mv +=step;
				 if (mv < 0) mv += overflow;
				 else if (mv >= overflow)  mv  -= overflow;
				 String ^newMinorVersion = mv.ToString(format);
				 if (newMinorVersion->Length > format->Length) {
					 newMinorVersion = newMinorVersion->Substring(1);
				 }
				 return version->Replace(minorVersion, newMinorVersion);
			 }

	private: bool OverrideAnalysis(void) {
				 if (!SatisfyingInput()) {
					 return false;
				 }
				 //
				 // Parse Platform.env of Project
				 //
				 //ProjectPlatforms = parsePlatformEnv(comboBoxProjectProject->Text);
				 //ReferencePlatforms = parsePlatformEnv(comboBoxReferenceProject->Text);
				 //
				 // Parse Project Override List
				 //
				 array <Overrider::OverrideDsc^>^OverrideListProject     = parseOverrideList(comboBoxReferenceProject->Text, textBoxProjectOverrideList->Text);
				 array <Overrider::OverrideDsc^>^OverrideListProject2    = parseOverrideList(comboBoxReferenceProject->Text, textBoxProjectProjectOverrideList2->Text);
				 if (OverrideListProject2 != nullptr) {
					 Array::Resize(OverrideListProject, OverrideListProject->Length + OverrideListProject2->Length);
					 for (int i=OverrideListProject->Length-OverrideListProject2->Length, j=0; j<OverrideListProject2->Length; i++, j++) {
						 OverrideListProject[i] = OverrideListProject2[j];
					 }
				 }
				 Array::Sort(OverrideListProject);
 				 OverrideListProject = uniqSortedArray(OverrideListProject);
				 listBoxProject->Items->Clear();
				 for (int i=0; i<OverrideListProject->Length; i++) {
					 listBoxProject->Items->Add(OverrideListProject[i]->ODOriginal + OVERRIDE_MARK_STRING + OverrideListProject[i]->ODOverride);
				 }
				 //
				 // Parse Reference Override List
				 //
				 array <Overrider::OverrideDsc^>^OverrideListReference    = parseOverrideList(comboBoxReferenceProject->Text, textBoxReferenceOverrideList->Text);
				 array <Overrider::OverrideDsc^>^OverrideListReference2   = parseOverrideList(comboBoxReferenceProject->Text, textBoxReferenceProjectOverrideList2->Text);
				 if (OverrideListReference2 != nullptr) {
					 Array::Resize(OverrideListReference, OverrideListReference->Length + OverrideListReference2->Length);
					 for (int i=OverrideListReference->Length-OverrideListReference2->Length, j=0; j<OverrideListReference2->Length; i++, j++) {
						 OverrideListReference[i] = OverrideListReference2[j];
					 }
				 }
				 Array::Sort(OverrideListReference);
 				 OverrideListReference = uniqSortedArray(OverrideListReference);
				 listBoxReference->Items->Clear();
				 for (int i=0; i<OverrideListReference->Length; i++) {
					 listBoxReference->Items->Add(OverrideListReference[i]->ODOriginal + OVERRIDE_MARK_STRING + OverrideListReference[i]->ODOverride);
				 }
				 //OverrideListReference = abstractPlatformCode(OverrideListReference);
				 //
				 // Parse Effective Override List 
				 //
				 array <Overrider::OverrideDsc^>^OverrideListEffective = parseEffectiveOverrideList(OverrideListProject, OverrideListReference);
				 Array::Sort(OverrideListEffective);
 				 OverrideListEffective = uniqSortedArray(OverrideListEffective);
				 checkedListBoxOverridden->Items->Clear();
				 for (int i=0; i<OverrideListEffective->Length; i++) {
					 checkedListBoxOverridden->Items->Add(OverrideListEffective[i]->ODOriginal + OVERRIDE_MARK_STRING + OverrideListEffective[i]->ODOverride);
					 checkedListBoxOverridden->SetItemChecked (i, true);
				 }
				 //
				 // Stop here for non-Hisotry Mode
				 //
				 if (!checkBoxHistoryMode->Checked) {
					 return true;
				 }
				 //
				 // Parse Exist Files List form History of a Tag number
				 //
				 //
				 // initialize log arrays
				 //
				 arrayFileLog = gcnew array <Overrider::LogOfFile^>(MAX_DESCRIPTION);
				 for (int i=0; i<MAX_DESCRIPTION; i++) {
					 arrayFileLog[i] = gcnew Overrider::LogOfFile();
				 }
				 arrayIssueLog = gcnew array <Overrider::LogOfIssue^>(MAX_DESCRIPTION);
				 for (int i=0; i<MAX_DESCRIPTION; i++) {
					 arrayIssueLog[i] = gcnew Overrider::LogOfIssue();
				 }
				 mIssueIndex = -1;
				 mFileCount = 0;
				 //TagBeginLineNumber = -1;
				 if (radioButtonTag->Checked) {
					 String^ strTagTo;
					 String^ strTagFrom;
					 if (!String::IsNullOrEmpty(textBoxTagNumberTo->Text)) {
						 strTagTo = textBoxTagNumberTo->Text;
						 strTagFrom = textBoxTagNumber->Text;
						 //strTagFrom = stepVersion(strTagFrom, -1);
					 } else {
						 String^ strTagTo = textBoxTagNumber->Text;
						 strTagFrom = textBoxTagNumber->Text;
						 //strTagFrom = stepVersion(strTagFrom, -1);
					 }
					 if (!String::IsNullOrEmpty(textBoxHistoryF->Text)) {
						 parseExistFilesFromHisotryByTagNumber(textBoxHistoryF->Text, strTagFrom, strTagTo);
					 } else if (!String::IsNullOrEmpty(textBoxHistoryC->Text)) {
						 parseExistFilesFromHisotryByTagNumber(textBoxHistoryC->Text, strTagFrom, strTagTo);
					 } else if (!String::IsNullOrEmpty(textBoxHistoryK->Text)) {
						 parseExistFilesFromHisotryByTagNumber(textBoxHistoryK->Text, strTagFrom, strTagTo);
					 }
					 //if (textBoxTagNumber->Text->Length == 8) {
						 //parseExistFilesFromHisotryByTagNumber(true, textBoxHistoryC->Text);
					 //} else {
						// parseExistFilesFromHisotryByTagNumber(false, textBoxHistoryC->Text);
						 //arrayIssueLog->CopyTo(arrayIssueLog2);
						 //arrayFileLog->CopyTo(arrayFileLog2);
						 //strTagFrom = strKernelTagFrom;
						 //strTagTo = strKernelTagTo;
						 //parseExistFilesFromHisotryByTagNumber(true, textBoxHistoryK->Text);
					 //}
					 //
					 // Increase a Issue for history
					 //
					 mIssueIndex++;
					 //
					 // Resize according to discovery
					 //
					 Array::Resize(arrayIssueLog, mIssueIndex);
					 Array::Resize(arrayFileLog, mFileCount);
				 } else {
					 parseExistFilesFromHisotryByIssueNumber();
				 }
				 //
				 // Return if no indicated tag# found
				 //
				 if (arrayIssueLog->Length == 0) {
					 if (radioButtonTag->Checked) {
						 MessageBox::Show("Cannot find Tag#");
						 textBoxTagNumber->Focus();
					 } else {
						 MessageBox::Show("Cannot find Issue#");
						 textBoxIssueNumber->Focus();
					 }
					 return false;
				 }
				 //
				 // Uniq files with identical Issue#
				 //
				 uniqFileWithSameIssueNumber();
				 //
				 // Add Log of History automatically
				 //
				 if (radioButtonTag->Checked) {
					 addLogOfHistoryAndTag();
				 }
				 //
				 // Apply override result to History logs' files
				 //
				 overrideFileLog(OverrideListProject);
				 //
				 // Apply override result to History logs' files
				 //
				 overrideFileLog(OverrideListEffective);
				 //
				 // Apply override result to History logs' files
				 //
				 //originalFileLog(OverrideListReference);
				 //
				 // Remove Log History if not overridden
				 //
				 if (radioButtonTag->Checked) {
					 removeLogOfHistoryNotOverridden();
				 }
				 //
				 // Process Platform code not overridden : Remove or Override
				 //
				 processPlatformCode();
				 //
				 // Identify multiple changed files and treat it as an overridden
				 //
				 markMultipleModifiedFiles();

				 return true;
			 }

	private: String^ FindPlatformFolder(String^ RootPath, String^ FolderName) {
				 String^ folder = Path::Combine(Path::Combine(RootPath, FolderName), "Insyde");
				 String^ folder_ex1 = Path::Combine(folder, "OemServices");
				 String^ folder_ex2 = Path::Combine(folder, "Common");
				 if (Directory::Exists(folder)) {
					 array<String^>^ dir = Directory::GetDirectories( folder );
					 for (int i=0; i<dir->Length; i++) {
						 if (String::Compare (folder_ex1, dir[i] ) != 0 && String::Compare (folder_ex2, dir[i]) != 0) {
							 return dir[i];
						 }
					 }
				 }
				 return nullptr;
			 }

	private: String^ FindOverrideFile(String^ RootPath, String^ FolderName) {
				 String^ folder = RootPath;
				 String^ fileName = nullptr;
				 if (!String::IsNullOrEmpty(FolderName)) {
					 array<String^>^ dir = Directory::GetDirectories( RootPath );
					 if (dir->Length == 0) {
						 return nullptr;
					 }
					 for (int i=0; i<dir->Length; i++) {
						 if ( Path::GetFileName(dir[i])->ToLower()->Contains( FolderName->ToLower())) {
			 				 folder = dir[i];
							 break;
						 }
					 }
					 if (folder == RootPath) {
						 return fileName;
					 }
				 }
				 array<String^>^ file = Directory::GetFiles( folder);
				 for (int i=0; i<file->Length; i++) {
					 if ( Path::GetFileName(file[i])->ToLower()->Contains("override")) {
						 fileName = file[i];
						 break;
					 }
				 }
				 return fileName;
			 }

	private: bool CopyFileCreateDirectory(String^ dirPathTgt, String^ filePathTgt, String^ filePathRef) {
			//
			// is is a overwrite?
			//
			bool fileOverwrite = false;
			if (String::Compare(dirPathTgt, comboBoxProjectProject->Text) == 0) {
				fileOverwrite = File::Exists(Path::Combine(comboBoxProjectProject->Text, filePathTgt));
			}
			//
			// Create folder if needed
			//
			filePathTgt = Path::Combine(dirPathTgt, filePathTgt);
			String^ DirectoryName = Path::GetDirectoryName(filePathTgt);
			if (!Directory::Exists(DirectoryName)) {
				try 
				{
					Directory::CreateDirectory(DirectoryName);
				}
				catch (ArgumentException^) 
				{
					String^ message = DirectoryName + " directory creation error!";
					MessageBox::Show(message);
					return false;
				}
			}
			//
			// Copy the file
			//
		    try
		    {
				File::Copy(filePathRef, filePathTgt, true);
		    }
		    catch ( Exception^ ) 
		    {
				String^ message = filePathRef + " file copy to " + filePathTgt + " error!";
				MessageBox::Show(message);
				return false;
		    }
			//
			// Touch the file if it is a override
			//
			if (fileOverwrite) {
				File::SetLastWriteTime(filePathTgt, System::DateTime::Now);
			}
			return true;
	}

	private: System::Void updateCheckedTbPages (int IssueIndex) {
				 //
				 // Reset tagpages for issue operation
				 //
				 this->tabControl1->Controls->Remove(this->tabPageAdded);
				 this->tabControl1->Controls->Remove(this->tabPageDeleted);
				 this->tabControl1->Controls->Remove(this->tabPageModified);
				 checkedListBoxAdded->Items->Clear();
				 checkedListBoxDeleted->Items->Clear();
				 checkedListBoxModified->Items->Clear();
				 //if (arrayIssueLog->Length == 0) return;
				 //
				 // Find Log of the Issue
				 //
				 textBoxLog->Text = arrayIssueLog[IssueIndex]->LogText;
				 //
				 // Add files with same issue index to listbox
				 //
				 String^ itemText;
				 for (int i=0; i<arrayFileLog->Length; i++) {
					 //
					 // Cross Tag update
					 //
					 if (IssueIndex == arrayIssueLog->Length-1) {
						 if (arrayFileLog[i]->DuplicateNumber <= 1) {
							 //
							 // File without duplication
							 //
							 if (!String::IsNullOrEmpty(arrayFileLog[i]->ODOverride)) {
								 itemText = String::Concat(arrayFileLog[i]->ODOriginal, OVERRIDE_MARK_STRING, arrayFileLog[i]->ODOverride, " : ", arrayFileLog[i]->IssueNumber);
							 } else {
								 itemText = arrayFileLog[i]->ODOriginal;
							 }
						 } else {
							 //
							 // Skip other duplications
							 //
							 continue;
						 }
					 } else {
						 //
						 // Single Issue update
						 //
						 if (arrayFileLog[i]->IssueIndex != IssueIndex) continue;
						 if (!String::IsNullOrEmpty(arrayFileLog[i]->ODOverride)) {
							 itemText = String::Concat(arrayFileLog[i]->ODOriginal, OVERRIDE_MARK_STRING, arrayFileLog[i]->ODOverride);
						 } else {
							 if (arrayFileLog[i]->DuplicateNumber >= 1) {
								 if (!String::IsNullOrEmpty(arrayFileLog[i]->ODOverride)) {
									 itemText = String::Concat(arrayFileLog[i]->ODOriginal, OVERRIDE_MARK_STRING, arrayFileLog[i]->ODOverride);
								 } else {
									 itemText = String::Concat(arrayFileLog[i]->ODOriginal, OVERRIDE_MARK_STRING, arrayFileLog[i]->ODOriginal);
								 }
							 } else {
								 itemText = arrayFileLog[i]->ODOriginal;
							 }
						 }
					 }
					 //
					 // Add item to coresponsive tabPage
					 //
					 switch (arrayFileLog[i]->ODMode) {
						 case Added:
							 checkedListBoxAdded->Items->Add(itemText, !itemText->Contains(OVERRIDE_MARK_STRING));
							 break;
						 case Deleted:
							 checkedListBoxDeleted->Items->Add(itemText, !itemText->Contains(OVERRIDE_MARK_STRING));
							 break;
						 case Modified:
							 checkedListBoxModified->Items->Add(itemText, !itemText->Contains(OVERRIDE_MARK_STRING));
							 break;
					 }
				 }
				 //
				 // Resume tagPages not blank
				 //
				 if (checkedListBoxAdded->Items->Count > 0) {
					 this->tabControl1->Controls->Add(this->tabPageAdded);
					 buttonOverriddenAdded->Text = "Override";
					 buttonCopyAdded->Text = "to Project";
				 }
				 if (checkedListBoxDeleted->Items->Count > 0) {
					 this->tabControl1->Controls->Add(this->tabPageDeleted);
					 buttonOverriddenDeleted->Text = "Override";
				 }
				 if (checkedListBoxModified->Items->Count > 0) {
					 this->tabControl1->Controls->Add(this->tabPageModified);
					 buttonOverriddenModified->Text = "Override";
					 buttonCopyModified->Text = "to Project";
				 }

			 }
	//
	// Form controls event handlers
	//
	private: System::Void comboBox_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 if (e->KeyCode == Keys::Delete) {
					if (((System::Windows::Forms::ComboBox^)sender)->Items->Count > 0) {
						((System::Windows::Forms::ComboBox^)sender)->Items->RemoveAt(((System::Windows::Forms::ComboBox^)sender)->SelectedIndex);
					}
				 }
			 }

	private: System::Void comboBox_SelectionChangeCommitted(System::Object^  sender, System::EventArgs^  e) {
				 ((System::Windows::Forms::ComboBox^)sender)->Items->Insert(0, ((System::Windows::Forms::ComboBox^)sender)->SelectedItem);
				 ((System::Windows::Forms::ComboBox^)sender)->Items->RemoveAt(((System::Windows::Forms::ComboBox^)sender)->SelectedIndex);
				 ((System::Windows::Forms::ComboBox^)sender)->SelectedIndex = 0;
			 }

	private: System::Void checkedListBox_ItemCheck(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e) {
				 int checkedCount;
				 System::Windows::Forms::CheckedListBox^ checkedListBox = (System::Windows::Forms::CheckedListBox^)sender;

				 if (e->NewValue == System::Windows::Forms::CheckState::Checked) {
					checkedCount = checkedListBox->CheckedItems->Count + 1;
				 } else {
					checkedCount = checkedListBox->CheckedItems->Count - 1;
				 }
				 toolStripStatusLabelCount->Text = checkedCount.ToString() + "/" + checkedListBox->Items->Count.ToString() + " items";
			 }

	private: System::Void tabPage_Leave(System::Object^  sender, System::EventArgs^  e) {
				 toolStripStatusLabelCount->Text = "";
				 toolStripStatusLabelCount->Visible = false;
				 toolStripProgressBar1->Value = 0;
			 }
	//
	// Form1
	//
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->Location = System::Drawing::Point(formLocation);
				 this->Size = System::Drawing::Size(formSize);
				 this->Refresh();
				 this->WindowState = formWindowState;
				 this->Refresh();
				 //toolTip1->SetToolTip(this->comboBoxProject, "A project codebase");
				 //toolTip1->SetToolTip(this->textBoxProjectPlatform, "Platform folder");
				 //toolTip1->SetToolTip(this->comboBoxProjectProject, "Project folder");
				 //toolTip1->SetToolTip(this->textBoxProjectOverrideList, "An Override file list generated by ProcessDsc.exe");
				 //toolTip1->SetToolTip(this->textBoxProjectProjectOverrideList2, "An Override file list maintained by project owner");
				 //toolTip1->SetToolTip(this->comboBoxReference, "A reference codebase");
				 //toolTip1->SetToolTip(this->textBoxReferencePlatform, "Platform folder");
				 //toolTip1->SetToolTip(this->comboBoxReferenceProject, "Project folder");
				 //toolTip1->SetToolTip(this->textBoxReferenceOverrideList, "An Override file list generated by ProcessDsc.exe");
				 //toolTip1->SetToolTip(this->textBoxReferenceProjectOverrideList2, "An Override file list maintained by reference code owner");
				 //toolTip1->SetToolTip(this->textBoxHistoryC, "History file provided by reference code owner with original SVN file list");
				 //toolTip1->SetToolTip(this->textBoxTagNumber, "Tag number within history file for result filtering");
				 //toolTip1->SetToolTip(this->comboBoxResult, "A folder for analysis reult");
				 //toolTip1->SetToolTip(this->buttonAnalysis, "Analysis override lists and history");
				 //toolTip1->SetToolTip(this->buttonBatch, "Batch processing analysising, adding, deleting, modifying and overriding");
				 //toolTip1->SetToolTip(this->buttonAllAdded, "Select all files");
				 //toolTip1->SetToolTip(this->buttonNoneAdded, "Select no file");
				 //toolTip1->SetToolTip(this->buttonCopyAdded, "Copy selected files to Project folder");
				 //toolTip1->SetToolTip(this->buttonAllDeleted, "Select all files");
				 //toolTip1->SetToolTip(this->buttonNoneDeleted, "Select no file");
				 //toolTip1->SetToolTip(this->buttonDelete, "Delete selected files from Project folder");
				 //toolTip1->SetToolTip(this->buttonAllModified, "Select all files");
				 //toolTip1->SetToolTip(this->buttonNoneModified, "Select no file");
				 //toolTip1->SetToolTip(this->buttonOverriddenModified, "Toggle selection of overridden and multiple changed files");
				 //toolTip1->SetToolTip(this->buttonCopyModified, "Copy selected files to Project folder");
			 }

	private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				SaveSettings();
			 }

	private: System::Void Form1_LocationChanged(System::Object^  sender, System::EventArgs^  e) {
				if (this->WindowState == FormWindowState::Normal) {
					formLocation = this->Location;
				}
			 }

	private: System::Void Form1_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
				if (this->WindowState == FormWindowState::Normal) {
					formSize = this->Size;
				}
				int width = this->statusStrip1->Width;
				int width2 = toolStripStatusLabelCount->Width;
				toolStripProgressBar1->Width = statusStrip1->Width - 20 - toolStripStatusLabelCount->Width;
			 }

	private: System::Void labelProjectProject_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (Directory::Exists(comboBoxProjectProject->Text)){
					 this->folderBrowserDialog1->SelectedPath = comboBoxProjectProject->Text;
				 }
				 if(folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 comboBoxProjectProject->Text = folderBrowserDialog1->SelectedPath;
				 }
			 }
	private: System::Void comboBoxProjectProject_Leave(System::Object^  sender, System::EventArgs^  e) {
				 if (Directory::Exists(comboBoxProjectProject->Text)) {
					 //ProjectPlatforms = parsePlatformEnv(comboBoxProjectProject->Text);
					 //if (String::IsNullOrEmpty(textBoxProjectPlatform->Text)) {
						// MessageBox::Show("No platform folder found!");
						// comboBoxProjectProject->Focus();
						// return;
					 //}
					 UpdateComboBox(comboBoxProjectProject, comboBoxProjectProject->Text, true);
					 //textBoxProjectOverrideList->Text = FindOverrideFile(comboBoxProjectProject->Text, "BIOS");
					 //if (String::IsNullOrEmpty(textBoxProjectOverrideList->Text)) {
						// textBoxProjectOverrideList->Text = FindOverrideFile(comboBoxProjectProject->Text, "uefi");
					 //}
					 //if (!String::IsNullOrEmpty(comboBoxProjectProject->Text)) {
						// textBoxProjectProjectOverrideList2->Text = FindOverrideFile(comboBoxProjectProject->Text, "");
					 //}
				 }
			 }
	private: System::Void labelProjectOverrideList_Click(System::Object^  sender, System::EventArgs^  e) {
				 //if (!String::IsNullOrEmpty(textBoxProjectOverrideList->Text)) {
					// openFileDialog1->InitialDirectory = Path::GetDirectoryName(textBoxProjectOverrideList->Text);
				 //} else {
					// if (!String::IsNullOrEmpty(comboBoxProjectProject->Text)) {
					//	 if (Directory::Exists(Path::Combine(comboBoxProjectProject->Text, "project"))) {
					//		 openFileDialog1->InitialDirectory = Path::Combine(comboBoxProjectProject->Text, "Project");
					//	 } else {
					//		 openFileDialog1->InitialDirectory = comboBoxProjectProject->Text;
					//	 }
					// }
				 //}
				 openFileDialog1->InitialDirectory = comboBoxProjectProject->Text;
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 textBoxProjectOverrideList->Text = openFileDialog1->FileName;
				 }
			 }
	private: System::Void labelProjectProjectOverrideList2_Click(System::Object^  sender, System::EventArgs^  e) {
				 //if (!String::IsNullOrEmpty(textBoxProjectProjectOverrideList2->Text)) {
					// openFileDialog1->InitialDirectory = Path::GetDirectoryName(textBoxProjectProjectOverrideList2->Text);
				 //} else {
					// if (!String::IsNullOrEmpty(comboBoxProjectProject->Text)) {
					//	 if (Directory::Exists(Path::Combine(comboBoxProjectProject->Text, "project"))) {
					//		 openFileDialog1->InitialDirectory = Path::Combine(comboBoxProjectProject->Text, "Project");
					//	 } else {
					//		 openFileDialog1->InitialDirectory = comboBoxProjectProject->Text;
					//	 }
					// }
				 //}
				 openFileDialog1->InitialDirectory = comboBoxProjectProject->Text;
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 textBoxProjectProjectOverrideList2->Text = openFileDialog1->FileName;
				 }
			 }

	private: System::Void labelReferenceProject_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (Directory::Exists(comboBoxReferenceProject->Text)){
					 this->folderBrowserDialog1->SelectedPath = comboBoxReferenceProject->Text;
				 }
				 if(folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 comboBoxReferenceProject->Text = folderBrowserDialog1->SelectedPath;
				 }
			 }
	private: System::Void comboBoxReferenceProject_Leave(System::Object^  sender, System::EventArgs^  e) {
				 if (Directory::Exists(comboBoxReferenceProject->Text)) {
					 //ReferencePlatforms = parsePlatformEnv(comboBoxReferenceProject->Text);
					 //if (String::IsNullOrEmpty(textBoxReferencePlatform->Text)) {
						// MessageBox::Show("No platform folder found!");
						// comboBoxReferenceProject->Focus();
						// return;
					 //}
					 UpdateComboBox(comboBoxReferenceProject, comboBoxReferenceProject->Text, true);
					 //textBoxReferenceOverrideList->Text = FindOverrideFile(comboBoxReferenceProject->Text, "BIOS");
					 //if (String::IsNullOrEmpty(textBoxReferenceOverrideList->Text)) {
						// textBoxReferenceOverrideList->Text = FindOverrideFile(comboBoxReferenceProject->Text, "uefi");
					 //}
					 //if (!String::IsNullOrEmpty(comboBoxReferenceProject->Text)) {
						// textBoxReferenceProjectOverrideList2->Text = FindOverrideFile(comboBoxReferenceProject->Text, "");
					 //}
					 String ^strHistoryFile = Path::Combine(comboBoxReferenceProject->Text, "History.txt");
					 if (File::Exists(strHistoryFile)) {
						 textBoxHistoryF->Text = strHistoryFile;
						 textBoxTagNumber->Text = tagFromHistory(strHistoryFile);
					 } else {
						 textBoxHistoryC->Text = "";
						 textBoxTagNumber->Text = "";
					 }
					 strHistoryFile = Path::Combine(comboBoxReferenceProject->Text, "Chipset.txt");
					 if (File::Exists(strHistoryFile)) {
						 textBoxHistoryC->Text = strHistoryFile;
						 if (String::IsNullOrEmpty(textBoxTagNumber->Text)) {
							 textBoxTagNumber->Text = tagFromHistory(strHistoryFile);
						 }
					 } else {
						 textBoxHistoryC->Text = "";
						 textBoxTagNumber->Text = "";
					 }
					 textBoxTagNumberTo->Text = textBoxTagNumber->Text;
					 strHistoryFile = Path::Combine(comboBoxReferenceProject->Text, "Kernel.txt");
					 if (File::Exists(strHistoryFile)) {
						 textBoxHistoryK->Text = strHistoryFile;
						 if (String::IsNullOrEmpty(textBoxTagNumber->Text)) {
							 textBoxTagNumber->Text = tagFromHistory(strHistoryFile);
						 }
					 } else {
						 textBoxHistoryK->Text = "";
						 textBoxTagNumber->Text = "";
					 }
				 }
			 }
	private: System::Void labelReferenceOverrideList_Click(System::Object^  sender, System::EventArgs^  e) {
				 //if (!String::IsNullOrEmpty(textBoxReferenceOverrideList->Text)) {
					// openFileDialog1->InitialDirectory = Path::GetDirectoryName(textBoxReferenceOverrideList->Text);
				 //} else {
					// if (!String::IsNullOrEmpty(comboBoxReferenceProject->Text)) {
					//	 if (Directory::Exists(Path::Combine(comboBoxReferenceProject->Text, "project"))) {
					//		 openFileDialog1->InitialDirectory = Path::Combine(comboBoxReferenceProject->Text, "Project");
					//	 } else {
					//		 openFileDialog1->InitialDirectory = comboBoxReferenceProject->Text;
					//	 }
					// }
				 //}
				 openFileDialog1->InitialDirectory = comboBoxReferenceProject->Text;
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 textBoxReferenceOverrideList->Text = openFileDialog1->FileName;
				 }
			 }
	private: System::Void labelReferenceProjectOverrideList2_Click(System::Object^  sender, System::EventArgs^  e) {
				 //if (!String::IsNullOrEmpty(textBoxReferenceProjectOverrideList2->Text)) {
					// openFileDialog1->InitialDirectory = Path::GetDirectoryName(textBoxReferenceProjectOverrideList2->Text);
				 //} else {
					// if (!String::IsNullOrEmpty(comboBoxReferenceProject->Text)) {
					//	 if (Directory::Exists(Path::Combine(comboBoxReferenceProject->Text, "project"))) {
					//		 openFileDialog1->InitialDirectory = Path::Combine(comboBoxReferenceProject->Text, "Project");
					//	 } else {
					//		 openFileDialog1->InitialDirectory = comboBoxReferenceProject->Text;
					//	 }
					// }
				 //}
				 openFileDialog1->InitialDirectory = comboBoxReferenceProject->Text;
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 textBoxReferenceProjectOverrideList2->Text = openFileDialog1->FileName;
				 }
			 }
	//
	// tab Page Control
	//
	private: System::Void labelResult_Click(System::Object^  sender, System::EventArgs^  e) {
				 folderBrowserDialog1->ShowNewFolderButton = true;
				 if(folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 UpdateComboBox(comboBoxResult, folderBrowserDialog1->SelectedPath, true);
				 }
				 folderBrowserDialog1->ShowNewFolderButton = false;
			 }

	private: System::Void comboBoxResult_Leave(System::Object^  sender, System::EventArgs^  e) {
				 UpdateComboBox(comboBoxResult, comboBoxResult->Text, true);
			 }

	private: System::Void buttonAnalysis_Click(System::Object^  sender, System::EventArgs^  e) {
				 //
				 // Reset Progress Bar
				 //
				 toolStripProgressBar1->Value = 0;
				 //
				 // Hide and clear previous result within tagPages
				 //
				 this->tabControl1->Controls->Remove(this->tabPageIssues);
				 this->tabControl1->Controls->Remove(this->tabPageLog);
				 this->tabControl1->Controls->Remove(this->tabPageAdded);
				 this->tabControl1->Controls->Remove(this->tabPageDeleted);
				 this->tabControl1->Controls->Remove(this->tabPageModified);
				 listBoxIssue->Items->Clear();
				 this->tabControl1->Controls->Remove(this->tabPageOverridden);
				 this->tabControl1->Controls->Remove(this->tabPageReference);
				 this->tabControl1->Controls->Remove(this->tabPageProject);
				 //
				 // Analyze and update tagPages
				 //
				 if (OverrideAnalysis()) {
					 if (checkBoxHistoryMode->Checked) {
						 //
						 // Mark overridden issues
						 //
						 for (int i=0; i<arrayFileLog->Length; i++) {
							 if (!String::IsNullOrEmpty(arrayFileLog[i]->ODOverride) || (arrayFileLog[i]->DuplicateNumber > 0)) {
								 arrayIssueLog[arrayFileLog[i]->IssueIndex]->IsOverridden = true;
								 if (!String::IsNullOrEmpty(arrayFileLog[i]->ODOverride)) {
									 String ^projectFolder = textBoxProjectPlatform->Text->Substring(comboBoxProjectProject->Text->Length+1);
									 if ((arrayFileLog[i]->ODOverride->Contains(projectFolder)) && !(arrayFileLog[i]->ODOverride->Contains("BIOS"))) {
										 arrayIssueLog[arrayFileLog[i]->IssueIndex]->IsProjectFile = true;
									 }
								 }
							 }
						 }
						 //
						 // Update Issue list
						 //
						 for (int i=arrayIssueLog->Length-1; i>=0; i--) {
							 int j = arrayIssueLog->Length-1-arrayIssueLog[i]->IssueIndex;
							 String^ itemText = j.ToString("000") + "." + arrayIssueLog[i]->IssueNumber;
							 if (arrayIssueLog[i]->IsOverridden) {
								 itemText += " *";
								 if (arrayIssueLog[i]->IsProjectFile) {
									 itemText += "*";
								 }
							 }
							 listBoxIssue->Items->Add(itemText);
						 }
						 //
						 // Show result to tagPages
						 //
						 if (listBoxIssue->Items->Count > 0) {
		 					 if (radioButtonTag->Checked) {
								 this->tabControl1->Controls->Add(this->tabPageIssues);
							 } else {
								 Clipboard::SetDataObject(textBoxIssueNumber->Text);
							 }
							 this->tabControl1->Controls->Add(this->tabPageLog);
						 }
						 //
						 // Add files to one of the operation checkedListBox
						 //
						 updateCheckedTbPages(arrayIssueLog->Length-1);
					 } else {
						 this->tabControl1->Controls->Add(this->tabPageOverridden);
						 this->tabControl1->Controls->Add(this->tabPageReference);
						 this->tabControl1->Controls->Add(this->tabPageProject);
					 }
					 //
					 // Sound
					 //
					 SystemSounds::Asterisk->Play();
					 MessageBox::Show("Analysis done! check all tabs for result");
				 }
			 }

	private: System::Void buttonBatch_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (String::IsNullOrEmpty(comboBoxResult->Text)) {
				 MessageBox::Show("Assign result folder before action.");
				 comboBoxResult->Focus();
				 return;
			 }
			 //
			 // Hide and clear previous result within tagPages
			 //
			 this->tabControl1->Controls->Remove(this->tabPageIssues);
			 this->tabControl1->Controls->Remove(this->tabPageLog);
			 listBoxIssue->Items->Clear();
			 //
			 // Reset tagpages for issue operation
			 //
			 this->tabControl1->Controls->Remove(this->tabPageAdded);
			 this->tabControl1->Controls->Remove(this->tabPageDeleted);
			 this->tabControl1->Controls->Remove(this->tabPageModified);
			 checkedListBoxAdded->Items->Clear();
			 checkedListBoxDeleted->Items->Clear();
			 checkedListBoxModified->Items->Clear();
			 //
			 // Analyze and manipulate files
			 //
			 if (OverrideAnalysis()) {
				String ^filePathRef;
				String ^filePathTgt;
				//
				// Initialize progress bar
				//
				toolStripProgressBar1->Maximum = arrayFileLog->Length;
				toolStripProgressBar1->Value = 0;

				for (int i=0; i<arrayFileLog->Length; i++) {
					 toolStripProgressBar1->PerformStep();
					 switch (arrayFileLog[i]->ODMode) {
						 case Deleted:
			 				 if (checkBoxDeleted->Checked) {
								 filePathTgt = Path::Combine(comboBoxProjectProject->Text, arrayFileLog[i]->ODOriginal);
								 if (File::Exists(filePathTgt)) {
									 File::Delete(filePathTgt);
									 deleteEmptyTree(Path::GetDirectoryName(filePathTgt));
								 }
							 }
							 break;
						 case Added:
			 				 if (checkBoxAdded->Checked) {
								 filePathRef = Path::Combine(comboBoxReferenceProject->Text, arrayFileLog[i]->ODOriginal);
								 CopyFileCreateDirectory(comboBoxProjectProject->Text, arrayFileLog[i]->ODOriginal, filePathRef);
							 }
							 break;
						 case Modified:
			 				 if (checkBoxModified->Checked) {
								 filePathRef = Path::Combine(comboBoxReferenceProject->Text, arrayFileLog[i]->ODOriginal);
								 if (String::IsNullOrEmpty(arrayFileLog[i]->ODOverride)) {
									 CopyFileCreateDirectory(comboBoxProjectProject->Text, arrayFileLog[i]->ODOriginal, filePathRef);
								 } else {
									 CopyFileCreateDirectory(comboBoxResult->Text, arrayFileLog[i]->ODOverride, filePathRef);
								 }
							 }
							 break;
					 }
				}
				SystemSounds::Asterisk->Play();
				MessageBox::Show("Finish processing " + toolStripProgressBar1->Maximum.ToString() + " files!");
			 }
		 }
	//
	// Button Auto resize
	//
	private: System::Void splitContainer1_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
				 float newSizeW = buttonAnalysis->Width /(float) 15.83333333333333;
				 float newSizeH = buttonAnalysis->Height /(float) 5.055555555555556;
				 float newSize = newSizeW < newSizeH ? newSizeW : newSizeH;
				 this->buttonAnalysis->Font = gcnew System::Drawing::Font(this->buttonAnalysis->Font->Name, newSize, this->buttonAnalysis->Font->Style, this->buttonAnalysis->Font->Unit);
				 this->buttonBatch->Font    = gcnew System::Drawing::Font(this->buttonBatch->Font->Name, newSize, this->buttonBatch->Font->Style, this->buttonBatch->Font->Unit);
			 }
	//
	// tab Page Added
	//
	private: System::Void tabPageAdded_Enter(System::Object^  sender, System::EventArgs^  e) {
				 toolStripStatusLabelCount->Text = checkedListBoxAdded->CheckedItems->Count.ToString() + "/" + checkedListBoxAdded->Items->Count.ToString() + " items";
				 toolStripStatusLabelCount->Visible = true;
			 }
	private: System::Void buttonAllAdded_Click(System::Object^  sender, System::EventArgs^  e) {
				 checkedListBoxAll(checkedListBoxAdded);
			 }
	private: System::Void buttonNoneAdded_Click(System::Object^  sender, System::EventArgs^  e) {
				 checkedListBoxNone(checkedListBoxAdded);
			 }
	private: System::Void buttonOverriddenAdded_Click(System::Object^  sender, System::EventArgs^  e) {
				 buttonCopyAdded->Text = checkedListBoxOverride(checkedListBoxAdded, buttonOverriddenAdded) ? "to Result" : "to Project";
			 }
	private: System::Void buttonCopyAdd_Click(System::Object^  sender, System::EventArgs^  e) {
				 bool toProject = (String::Compare(buttonCopyAdded->Text, "to Project") == 0);
				 if (toProject) {
					 if (String::IsNullOrEmpty(comboBoxProjectProject->Text)) {
						 MessageBox::Show("Assign project folder before action.");
						 return;
					 }
					 copySelectedFilesComboBox(checkedListBoxAdded, -1, comboBoxProjectProject->Text);
				 } else {
					 if (String::IsNullOrEmpty(comboBoxResult->Text)) {
						 MessageBox::Show("Assign result folder before action.");
						 return;
					 }
					 copySelectedFilesComboBox(checkedListBoxAdded, listBoxIssue->SelectedIndex, Path::Combine(comboBoxResult->Text, textBoxTagNumber->Text));
				 }
			 }
	//
	// tab Page Deleted
	//
	private: System::Void tabPageDeleted_Enter(System::Object^  sender, System::EventArgs^  e) {
				 toolStripStatusLabelCount->Text = checkedListBoxDeleted->CheckedItems->Count.ToString() + "/" + checkedListBoxDeleted->Items->Count.ToString() + " items";
				 toolStripStatusLabelCount->Visible = true;
			 }
	private: System::Void buttonAllDeleted_Click(System::Object^  sender, System::EventArgs^  e) {
				 checkedListBoxAll(checkedListBoxDeleted);
			 }
	private: System::Void buttonNoneDeleted_Click(System::Object^  sender, System::EventArgs^  e) {
				 checkedListBoxNone(checkedListBoxDeleted);
			 }
	private: System::Void buttonOverriddenDeleted_Click(System::Object^  sender, System::EventArgs^  e) {
				 buttonDelete->Text = checkedListBoxOverride(checkedListBoxDeleted, buttonOverriddenDeleted) ? "to Result" : "from Project";
			 }
	private: System::Void buttonDelete_Click(System::Object^  sender, System::EventArgs^  e) {
				 toolStripProgressBar1->Maximum = checkedListBoxDeleted->CheckedItems->Count;
				 toolStripProgressBar1->Value = 0;
				 bool fromProject = (String::Compare(buttonDelete->Text, "from Project") == 0);
				 if (fromProject) {
					 if (String::IsNullOrEmpty(comboBoxProjectProject->Text)) {
						 MessageBox::Show("Assign project folder before action.");
						 return;
					 }
					 deleteSelectedFiles(checkedListBoxDeleted, comboBoxProjectProject->Text);
					 MessageBox::Show("Finish deleting " + toolStripProgressBar1->Maximum.ToString() + " files from Project!");
				 }
			 }
	//
	// tab Page Modified
	//
	private: System::Void tabPageModified_Enter(System::Object^  sender, System::EventArgs^  e) {
				 toolStripStatusLabelCount->Text = checkedListBoxModified->CheckedItems->Count.ToString() + "/" + checkedListBoxModified->Items->Count.ToString() + " items";
				 toolStripStatusLabelCount->Visible = true;
			 }
	private: System::Void buttonAllModified_Click(System::Object^  sender, System::EventArgs^  e) {
				 checkedListBoxAll(checkedListBoxModified);
			 }
	private: System::Void buttonNoneModified_Click(System::Object^  sender, System::EventArgs^  e) {
				 checkedListBoxNone(checkedListBoxModified);
			 }
	private: System::Void buttonOverriddenModified_Click(System::Object^  sender, System::EventArgs^  e) {
				 buttonCopyModified->Text = checkedListBoxOverride(checkedListBoxModified, buttonOverriddenModified) ? "to Result" : "to Project";
			 }
	private: System::Void buttonProjectOverriddenModified_Click(System::Object^  sender, System::EventArgs^  e) {
				 buttonProjectOverriddenModified->Text = checkedListBoxProjectOverride(checkedListBoxModified, buttonProjectOverriddenModified) ? "!Project Overridden" : "Project Overridden";
			 }
	private: System::Void buttonCopyModified_Click(System::Object^  sender, System::EventArgs^  e) {
				 bool toProject = (String::Compare(buttonCopyModified->Text, "to Project") == 0);
				 if (toProject) {
					 if (String::IsNullOrEmpty(comboBoxProjectProject->Text)) {
						 MessageBox::Show("Assign project folder before action.");
						 return;
					 }
					 copySelectedFilesComboBox(checkedListBoxModified, -1, comboBoxProjectProject->Text);
				 } else {
					 if (String::IsNullOrEmpty(comboBoxResult->Text)) {
						 MessageBox::Show("Assign result folder before action.");
						 return;
					 }
					 copySelectedFilesComboBox(checkedListBoxModified, listBoxIssue->SelectedIndex, Path::Combine(comboBoxResult->Text, textBoxTagNumber->Text));
				 }
			 }
	//
	// listBoxIssue
	//
	private: System::Void tabPageIssues_Enter(System::Object^  sender, System::EventArgs^  e) {
				 toolStripStatusLabelCount->Text = listBoxIssue->Items->Count.ToString() + " items";
				 toolStripStatusLabelCount->Visible = true;
			 }

	private: System::Void listBoxIssue_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 //
				 // Find Issue index, issue number is not reliable because of duplication all the time
				 //
				 int IssueIndex = arrayIssueLog->Length - listBoxIssue->SelectedIndex - 1;
				 //
				 // Update Log text of the selected issue number
				 //
				 textBoxLog->Text = arrayIssueLog[IssueIndex]->LogText;
				 //
				 // Add files with same issue index to listbox
				 //
				 updateCheckedTbPages(IssueIndex);
				 //
				 // Sound
				 //
				 //SystemSounds::Asterisk->Play();
				 //
				 // Copy IssueNumber to clip board
				 //
				 if (listBoxIssue->Text->Length >= 13) {
					 Clipboard::SetDataObject( listBoxIssue->Text->Substring(4, 10));
				 }
			 }
	//
	// Copyright
	//
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("Copyright (c) 1983-2012, Insyde Software Corporation. All Rights Reserved.");
			 }
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 textBoxTagNumber->Enabled = radioButtonTag->Checked;
				 textBoxTagNumberTo->Enabled = textBoxTagNumber->Enabled;
				 textBoxIssueNumber->Enabled = radioButtonIssue->Checked;
			 }
	private: System::Void tabPageOverridden_Enter(System::Object^  sender, System::EventArgs^  e) {
				 toolStripStatusLabelCount->Text = checkedListBoxOverridden->CheckedItems->Count.ToString() + "/" + checkedListBoxOverridden->Items->Count.ToString() + " items";
				 toolStripStatusLabelCount->Visible = true;
			 }
	private: System::Void tabPageReference_Enter(System::Object^  sender, System::EventArgs^  e) {
				 toolStripStatusLabelCount->Text = listBoxReference->Items->Count.ToString() + " items";
				 toolStripStatusLabelCount->Visible = true;
			 }
	private: System::Void tabPageProject_Enter(System::Object^  sender, System::EventArgs^  e) {
				 toolStripStatusLabelCount->Text = listBoxProject->Items->Count.ToString() + " items";
				 toolStripStatusLabelCount->Visible = true;
			 }
	private: System::Void buttonAllOverridden_Click(System::Object^  sender, System::EventArgs^  e) {
				 checkedListBoxAll(checkedListBoxOverridden);
			 }
	private: System::Void buttonNoneOverridden_Click(System::Object^  sender, System::EventArgs^  e) {
				 checkedListBoxNone(checkedListBoxOverridden);
			 }
	private: System::Void buttonOverrideToResult_Click(System::Object^  sender, System::EventArgs^  e) {
				 copySelectedFilesComboBox(checkedListBoxOverridden, -1, comboBoxResult->Text);
			 }
	private: System::Void buttonOverrideToReference_Click(System::Object^  sender, System::EventArgs^  e) {
					 copySelectedFilesComboBox(checkedListBoxOverridden, -1, comboBoxReferenceProject->Text);
			 }

	private: System::Void CheckHistoryMode(void) {

				 labelHistoryF->Enabled = checkBoxHistoryMode->Checked;
				 textBoxHistoryF->Enabled = checkBoxHistoryMode->Checked;
				 labelHistoryC->Enabled = checkBoxHistoryMode->Checked;
				 textBoxHistoryC->Enabled = checkBoxHistoryMode->Checked;
				 labelHistoryK->Enabled = checkBoxHistoryMode->Checked;
				 textBoxHistoryK->Enabled = checkBoxHistoryMode->Checked;
				 radioButtonTag->Enabled = checkBoxHistoryMode->Checked;
				 radioButtonIssue->Enabled = checkBoxHistoryMode->Checked;
				 textBoxTagNumber->Enabled = checkBoxHistoryMode->Checked & radioButtonTag->Checked;;
				 textBoxTagNumberTo->Enabled = textBoxTagNumber->Enabled;
				 textBoxIssueNumber->Enabled = checkBoxHistoryMode->Checked & radioButtonIssue->Checked;;
				 checkBoxAdded->Enabled = checkBoxHistoryMode->Checked;
				 checkBoxDeleted->Enabled = checkBoxHistoryMode->Checked;
				 checkBoxModified->Enabled = checkBoxHistoryMode->Checked;
			 }

	private: System::Void checkBoxHistoryMode_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 CheckHistoryMode();
			 }

	private: System::Void labelProjectPlatform_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (Directory::Exists(comboBoxProjectProject->Text)){
					 this->folderBrowserDialog1->SelectedPath = comboBoxProjectProject->Text;
				 }
				 if(folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 textBoxProjectPlatform->Text = folderBrowserDialog1->SelectedPath;
				 }
			 }
	private: System::Void labelReferencePlatform_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (Directory::Exists(comboBoxReferenceProject->Text)){
					 this->folderBrowserDialog1->SelectedPath = comboBoxReferenceProject->Text;
				 }
				 if(folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 textBoxReferencePlatform->Text = folderBrowserDialog1->SelectedPath;
				 }
			 }
	private: System::Void labelHistoryF_Click(System::Object^  sender, System::EventArgs^  e) {
				 openFileDialog1->InitialDirectory = comboBoxReferenceProject->Text;
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 textBoxHistoryF->Text = openFileDialog1->FileName;
					 //textBoxTagNumber->Text = tagFromHistoryTag(textBoxHistoryF->Text);
					 //textBoxTagNumberTo->Text = textBoxTagNumber->Text;
				 }
			 }
	private: System::Void labelHistoryC_Click(System::Object^  sender, System::EventArgs^  e) {
				 openFileDialog1->InitialDirectory = comboBoxReferenceProject->Text;
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 textBoxHistoryC->Text = openFileDialog1->FileName;
				 }
			 }
	private: System::Void labelHistoryK_Click(System::Object^  sender, System::EventArgs^  e) {
				 openFileDialog1->InitialDirectory = comboBoxReferenceProject->Text;
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 textBoxHistoryK->Text = openFileDialog1->FileName;
				 }
			 }
	};
}

