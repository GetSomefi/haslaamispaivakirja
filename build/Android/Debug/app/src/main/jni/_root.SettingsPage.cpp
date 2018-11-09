// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/SettingsPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bgImage.h>
#include <_root.FlyingDock.h>
#include <_root.Haslaamispaivak-4f321fb2.h>
#include <_root.Haslaamispaivak-8c2039a.h>
#include <_root.Haslaamispaivak-a8299899.h>
#include <_root.LongPressButton.h>
#include <_root.SettingsPage.h>
#include <basic.LabelText.h>
#include <basicBtn.Button.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Navigation.PageExpression.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <header.Text.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[17];
static uType* TYPES[7];

namespace g{

// public partial sealed class SettingsPage :2
// {
// static SettingsPage() :13
static void SettingsPage__cctor_4_fn(uType* __type)
{
    SettingsPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb6"*/]);
    SettingsPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"title"*/]);
    SettingsPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Value"*/]);
}

static void SettingsPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb6");
    ::STRINGS[2] = uString::Const("title");
    ::STRINGS[3] = uString::Const("Value");
    ::STRINGS[4] = uString::Const("Settings");
    ::STRINGS[5] = uString::Const("Title");
    ::STRINGS[6] = uString::Const("goToOldEntrys");
    ::STRINGS[7] = uString::Const("Tietojen tila: ");
    ::STRINGS[8] = uString::Const("dataExists");
    ::STRINGS[9] = uString::Const("SettingsPage.ux");
    ::STRINGS[10] = uString::Const("P\303\244iv\303\244kirjat");
    ::STRINGS[11] = uString::Const("N\303\244yt\303\244");
    ::STRINGS[12] = uString::Const("#125F63");
    ::STRINGS[13] = uString::Const("Asetukset");
    ::STRINGS[14] = uString::Const("VAARA-ALUE");
    ::STRINGS[15] = uString::Const("Voit halutessasi tyhjent\303\244\303\244 kaikki tiedot t\303\244st\303\244 laitteesta painamalla alla olevaa nappia pitk\303\244\303\244n.");
    ::STRINGS[16] = uString::Const("Tietoja ei voi palauttaa takaisin!");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL);
    type->SetDependencies(
        ::g::Haslaamispaivakirja_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(121,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(SettingsPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SettingsPage, temp_title_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SettingsPage, temp1_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SettingsPage, temp_eb6), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(SettingsPage, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&SettingsPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SettingsPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SettingsPage::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* SettingsPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 129;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SettingsPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("SettingsPage", options);
    type->fp_build_ = SettingsPage_build;
    type->fp_cctor_ = SettingsPage__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public SettingsPage(Fuse.Navigation.Router router) :17
void SettingsPage__ctor_8_fn(SettingsPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :23
void SettingsPage__InitializeUX_fn(SettingsPage* __this)
{
    __this->InitializeUX();
}

// public SettingsPage New(Fuse.Navigation.Router router) :17
void SettingsPage__New5_fn(::g::Fuse::Navigation::Router* router1, SettingsPage** __retval)
{
    *__retval = SettingsPage::New5(router1);
}

uSStrong<uArray*> SettingsPage::__g_static_nametable1_;
::g::Uno::UX::Selector SettingsPage::__selector0_;
::g::Uno::UX::Selector SettingsPage::__selector1_;

// public SettingsPage(Fuse.Navigation.Router router) [instance] :17
void SettingsPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :23
void SettingsPage::InitializeUX()
{
    uString* temp2 = ::STRINGS[4/*"Settings"*/];
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SettingsPage::__g_static_nametable1_);
    ::g::FlyingDock* temp = ::g::FlyingDock::New4(router);
    temp_title_inst = ::g::Haslaamispaivakirja_FlyingDock_title_Property::New1(temp, SettingsPage::__selector0_);
    ::g::Fuse::Navigation::PageExpression* temp3 = ::g::Fuse::Navigation::PageExpression::New1(::STRINGS[5/*"Title"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"goToOldEntrys"*/]);
    uString* temp5 = ::STRINGS[7/*"Tietojen ti...*/];
    ::g::Fuse::Reactive::Constant* temp6 = ::g::Fuse::Reactive::Constant::New1(temp5);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"dataExists"*/]);
    ::g::basic::LabelText* temp1 = ::g::basic::LabelText::New5();
    temp1_Value_inst = ::g::Haslaamispaivakirja_FuseControlsTextControl_Value_Property::New1(temp1, SettingsPage::__selector1_);
    ::g::Fuse::Reactive::Add* temp8 = ::g::Fuse::Reactive::Add::New1(temp6, temp7);
    ::g::Uno::UX::Resource* temp9 = ::g::Uno::UX::Resource::New1(::STRINGS[5/*"Title"*/], temp2);
    ::g::Fuse::Reactive::JavaScript* temp10 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::bgImage* temp11 = ::g::bgImage::New4();
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp_title_inst, (uObject*)temp3, 3);
    ::g::Fuse::Controls::ScrollView* temp13 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp14 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::header::Text* temp15 = ::g::header::Text::New4();
    ::g::basicBtn::Button* temp16 = ::g::basicBtn::Button::New4();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::header::Text* temp17 = ::g::header::Text::New4();
    ::g::Fuse::Controls::Panel* temp18 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp19 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::SolidColor* temp20 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::basic::LabelText* temp21 = ::g::basic::LabelText::New5();
    ::g::Fuse::Controls::Panel* temp22 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp23 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::SolidColor* temp24 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::basic::LabelText* temp25 = ::g::basic::LabelText::New5();
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp8, 3);
    ::g::LongPressButton* temp27 = ::g::LongPressButton::New4();
    ::g::basic::LabelText* temp28 = ::g::basic::LabelText::New5();
    ::g::Fuse::Drawing::StaticSolidColor* temp29 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5490196f, 0.5372549f, 0.6901961f, 0.6980392f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    temp10->LineNumber(4);
    temp10->FileName(::STRINGS[9/*"SettingsPag...*/]);
    temp10->SourceLineNumber(4);
    temp10->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    temp10->File(::g::Uno::UX::BundleFileSource::New1(::g::Haslaamispaivakirja_bundle::SettingsPage02002bd6()));
    temp11->SourceLineNumber(6);
    temp11->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    temp11->File(::g::Uno::UX::BundleFileSource::New1(::g::Haslaamispaivakirja_bundle::settingsf4eda0eb()));
    temp->SourceLineNumber(8);
    temp->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp3->SourceLineNumber(8);
    temp3->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    temp13->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp13->SourceLineNumber(10);
    temp13->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    temp13->Background(temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp14->Margin(::g::Uno::Float4__New2(15.0f, 60.0f, 15.0f, 0.0f));
    temp14->SourceLineNumber(12);
    temp14->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    temp15->Value(::STRINGS[10/*"Päiväkirjat"*/]);
    temp15->TextAlignment(0);
    temp15->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp15->SourceLineNumber(14);
    temp15->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    temp16->Text(::STRINGS[11/*"Näytä"*/]);
    temp16->BgColor(::STRINGS[12/*"#125F63"*/]);
    temp16->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 30.0f));
    temp16->SourceLineNumber(16);
    temp16->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp16, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    temp4->SourceLineNumber(16);
    temp4->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    temp17->Value(::STRINGS[13/*"Asetukset"*/]);
    temp17->TextAlignment(0);
    temp17->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp17->SourceLineNumber(18);
    temp17->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    temp18->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    temp18->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 8.0f));
    temp18->SourceLineNumber(21);
    temp18->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp19->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp19->SourceLineNumber(22);
    temp19->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Fills()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp20);
    temp20->Color(::g::Uno::Float4__New2(0.854902f, 0.2588235f, 0.2705882f, 1.0f));
    temp21->Value(::STRINGS[14/*"VAARA-ALUE"*/]);
    temp21->TextWrapping(1);
    temp21->TextAlignment(1);
    temp21->Color(::g::Uno::Float4__New2(0.854902f, 0.2588235f, 0.2705882f, 1.0f));
    temp21->SourceLineNumber(26);
    temp21->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    temp22->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    temp22->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 15.0f));
    temp22->SourceLineNumber(27);
    temp22->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    temp23->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp23->SourceLineNumber(28);
    temp23->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Fills()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp24);
    temp24->Color(::g::Uno::Float4__New2(0.854902f, 0.2588235f, 0.2705882f, 1.0f));
    temp25->Value(::STRINGS[15/*"Voit halute...*/]);
    temp25->TextWrapping(1);
    temp25->SourceLineNumber(33);
    temp25->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    temp1->TextWrapping(1);
    temp1->SourceLineNumber(34);
    temp1->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    temp8->SourceLineNumber(34);
    temp8->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    temp6->SourceLineNumber(34);
    temp6->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    temp7->SourceLineNumber(34);
    temp7->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    temp27->BackgroundColor(::g::Uno::Float4__New2(0.854902f, 0.2588235f, 0.2705882f, 1.0f));
    temp27->SourceLineNumber(36);
    temp27->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    temp28->Value(::STRINGS[16/*"Tietoja ei ...*/]);
    temp28->TextWrapping(1);
    temp28->FontSize(15.0f);
    temp28->TextAlignment(1);
    temp28->Color(::g::Uno::Float4__New2(0.9803922f, 0.9960784f, 1.0f, 1.0f));
    temp28->Alignment(0);
    temp28->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    temp28->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp28->SourceLineNumber(38);
    temp28->SourceFileName(::STRINGS[9/*"SettingsPag...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::TYPES[6/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp9);
}

// public SettingsPage New(Fuse.Navigation.Router router) [static] :17
SettingsPage* SettingsPage::New5(::g::Fuse::Navigation::Router* router1)
{
    SettingsPage* obj1 = (SettingsPage*)uNew(SettingsPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
