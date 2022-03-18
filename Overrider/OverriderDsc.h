#pragma once

namespace OverrideDescriptor {
	using namespace System;
	using namespace System::IO;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;
	//
	// Definition for Registry manipulation
	//
	#define	MAX_DESCRIPTION					16384
	#define APP_KEY							"Overrider"
	#define APP_VERSION_VALUE   			"AppVersion"
	#define APP_REGISTRY_VERSION			"0.1"
	#define MAX_LOCATION_SAVED				10

	#define PROJECT_PROJECT_PATH_KEY		"ProjectProjectPath"
	#define REFERENCE_PROJECT_PATH_KEY		"ReferenceProjectPath"
	#define RESULT_PATH_KEY 				"ResultPath"

	#define PROJECT_PROJECT_PATH_VALUE   	"ProjectProjectPathV"
	#define PROJECT_PLATFORM_PATH_VALUE   	"ProjectPlatformPathV"
	#define OVERRIDE_LIST_FILE_VALUE		"OverrideListFileV"
	#define OVERRIDE_LIST_2_FILE_VALUE		"OverrideListFile2V"
	#define REFERENCE_PROJECT_PATH_VALUE	"ReferenceProjectPathV"
	#define REFERENCE_PLATFORM_PATH_VALUE	"ReferencePlatformPathV"
	#define OVERRIDE_LIST_R_FILE_VALUE		"OverrideListFileRV"
	#define OVERRIDE_LIST_R_2_FILE_VALUE	"OverrideListFileR2V"
	#define RESULT_PATH_VALUE 				"ResultPathV"

	#define FORM_LOCATION_X_VALUE			"FormLocationXV"
	#define FORM_LOCATION_Y_VALUE			"FormLocationYV"
	#define FORM_SIZE_WIDTH_VALUE			"FormSizeWidthV"
	#define FORM_SIZE_HEIGHT_VALUE			"FormSizeHeightV"
	#define FORM_SIZE_WINDOWSTATE_VALUE		"FormWindowStateV"

	#define HISTORY_0_VALUE					"History0"
	#define HISTORY_VALUE					"History"
	#define HISTORY_2_VALUE					"History2"
	#define RADIO_TAG_NUMBER_VALUE			"RadioTagNumber"
	#define TAG_NUMBER_VALUE				"TagNumber"
	#define TAG_NUMBER_TO_VALUE				"TagNumberTo"
	#define RADIO_ISSUE_NUMBER_VALUE		"RadioIssueNumber"
	#define ISSUE_NUMBER_VALUE				"IssueNumber"

	#define HISTORY_MODE_VALUE				"HistoryMode"
	#define ENABLE_ADDED_VALUE				"AddedEnable"
	#define ENABLE_DELETED_VALUE			"DeletedEnable"
	#define ENABLE_MODIFIED_VALUE			"ModifiedEnable"

	#define OVERRIDE_MARK_STRING			"  <-  "
	#define POSTFIX_LENGTH_HISTORY_LINE		3 // length of "#; "

	#define ANCHOR_TAG  "Tag#:"
	#define ANCHOR_LABEL  "Label#:"
	#define ANCHOR_ISSUE  "Issue#:"
	#define ANCHOR_MODIFIED  "Modified:"
	#define ANCHOR_ADDED  "Added:"
	#define ANCHOR_DELETED  "Deleted:"

	//
	// Enumeration for file operations
	//
	enum ODTransMode {Added, Deleted, Modified};
	//
	// Class of code base
	//
	enum CbClass {CcKernel, CcCRB=10, CcFeature=14, CcPlatform};
	//
	// Override description class
	//
	ref class OverrideDsc: public IComparable<OverrideDsc^> {
	public:
		String ^ODOriginal;
		String ^ODOverride;
		//
		// Only the name of original file will be compared
		//
		virtual Int32 CompareTo(OverrideDsc^ other)
		{
		  return ((gcnew CaseInsensitiveComparer)->Compare( ODOriginal, other->ODOriginal ));
		}
	};
	//
	// Log of a file
	//
	ref class LogOfFile: public OverrideDsc {
	public:
		String ^IssueNumber;
		int IssueIndex;
		ODTransMode ODMode;
		int DuplicateNumber;
	};
	//
	// Log of an Issue
	//
	ref class LogOfIssue {
	public:
		String ^IssueNumber;
		int IssueIndex;
		String ^LogText;
		bool IsOverridden;
		bool IsProjectFile;
	};

	ref class Symbol {
	public:
		String ^Name;
		String ^Value;

		Symbol(String^ name, String^ value)
		{
			Name = name;
			Value = value;
		}
	};

	//ref class PlatformFolders {
	//public:
	//	String ^EfiSource;
	//	String ^Platform;
	//	String ^Project;
	//	String ^PlatformLibDir;
	//};
}