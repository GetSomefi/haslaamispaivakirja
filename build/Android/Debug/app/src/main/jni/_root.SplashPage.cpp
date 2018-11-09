// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/SplashPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-35b71aea.h>
#include <_root.Haslaamispaivak-a8299899.h>
#include <_root.SplashPage.h>
#include <basicBtn.Button.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.Video.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Effects.Blur.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Triggers.Progres-182f6b55.h>
#include <Fuse.Triggers.Trigger.h>
#include <generaltext.Text.h>
#include <header.Text.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[10];
static uType* TYPES[7];

namespace g{

// public partial sealed class SplashPage :2
// {
// static SplashPage() :14
static void SplashPage__cctor_4_fn(uType* __type)
{
    SplashPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"progressBar"*/], ::STRINGS[2/*"temp_eb7"*/]);
    SplashPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Width"*/]);
    SplashPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"progressBar"*/]);
}

static void SplashPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("progressBar");
    ::STRINGS[2] = uString::Const("temp_eb7");
    ::STRINGS[3] = uString::Const("Width");
    ::STRINGS[4] = uString::Const("goToFirstPage");
    ::STRINGS[5] = uString::Const("SplashPage.ux");
    ::STRINGS[6] = uString::Const("original video by Peter Virtanen");
    ::STRINGS[7] = uString::Const("The Mood");
    ::STRINGS[8] = uString::Const("How are we feeling today?");
    ::STRINGS[9] = uString::Const("Aloitetaan");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Haslaamispaivakirja_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
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
        ::g::Fuse::Navigation::Router_typeof(), offsetof(SplashPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(SplashPage, progressBar_Width_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(SplashPage, progressBar), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SplashPage, temp_eb7), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(SplashPage, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&SplashPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SplashPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SplashPage::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* SplashPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 129;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SplashPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("SplashPage", options);
    type->fp_build_ = SplashPage_build;
    type->fp_cctor_ = SplashPage__cctor_4_fn;
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

// public SplashPage(Fuse.Navigation.Router router) :18
void SplashPage__ctor_8_fn(SplashPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :24
void SplashPage__InitializeUX_fn(SplashPage* __this)
{
    __this->InitializeUX();
}

// public SplashPage New(Fuse.Navigation.Router router) :18
void SplashPage__New5_fn(::g::Fuse::Navigation::Router* router1, SplashPage** __retval)
{
    *__retval = SplashPage::New5(router1);
}

uSStrong<uArray*> SplashPage::__g_static_nametable1_;
::g::Uno::UX::Selector SplashPage::__selector0_;
::g::Uno::UX::Selector SplashPage::__selector1_;

// public SplashPage(Fuse.Navigation.Router router) [instance] :18
void SplashPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :24
void SplashPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SplashPage::__g_static_nametable1_);
    progressBar = ::g::Fuse::Controls::Rectangle::New3();
    progressBar_Width_inst = ::g::Haslaamispaivakirja_FuseElementsElement_Width_Property::New1(progressBar, SplashPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"goToFirstPage"*/]);
    ::g::Fuse::Reactive::JavaScript* temp1 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp2 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Video* temp3 = ::g::Fuse::Controls::Video::New4();
    ::g::Fuse::Effects::Blur* temp4 = ::g::Fuse::Effects::Blur::New2();
    ::g::Fuse::Triggers::ProgressAnimation* temp5 = ::g::Fuse::Triggers::ProgressAnimation::New2();
    ::g::Fuse::Animations::Change* temp6 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<Uno.UX.Size>*/], progressBar_Width_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp7 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::generaltext::Text* temp8 = ::g::generaltext::Text::New4();
    ::g::Fuse::Controls::Grid* temp9 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp10 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::header::Text* temp11 = ::g::header::Text::New4();
    ::g::generaltext::Text* temp12 = ::g::generaltext::Text::New4();
    ::g::basicBtn::Button* temp13 = ::g::basicBtn::Button::New4();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[5/*"SplashPage.ux"*/]);
    temp1->LineNumber(4);
    temp1->FileName(::STRINGS[5/*"SplashPage.ux"*/]);
    temp1->SourceLineNumber(4);
    temp1->SourceFileName(::STRINGS[5/*"SplashPage.ux"*/]);
    temp1->File(::g::Uno::UX::BundleFileSource::New1(::g::Haslaamispaivakirja_bundle::SplashPage53ac0018()));
    temp2->ClipToBounds(true);
    temp2->SourceLineNumber(6);
    temp2->SourceFileName(::STRINGS[5/*"SplashPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), progressBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp3->IsLooping(true);
    temp3->AutoPlay(true);
    temp3->StretchMode(6);
    temp3->Opacity(0.7f);
    temp3->Layer(1);
    temp3->SourceLineNumber(8);
    temp3->SourceFileName(::STRINGS[5/*"SplashPage.ux"*/]);
    temp3->File(::g::Uno::UX::BundleFileSource::New1(::g::Haslaamispaivakirja_bundle::retkelleoma398023dd()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp4->Radius(3.75f);
    temp4->SourceLineNumber(9);
    temp4->SourceFileName(::STRINGS[5/*"SplashPage.ux"*/]);
    temp5->SourceLineNumber(10);
    temp5->SourceFileName(::STRINGS[5/*"SplashPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp6);
    ::g::Fuse::Animations::Change__set_Value_fn(temp6, uCRef(::g::Uno::UX::Size__New1(100.0f, 1)));
    uPtr(progressBar)->Width(::g::Uno::UX::Size__New1(0.0f, 4));
    uPtr(progressBar)->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    uPtr(progressBar)->Opacity(0.2f);
    uPtr(progressBar)->Name(SplashPage::__selector1_);
    uPtr(progressBar)->SourceLineNumber(15);
    uPtr(progressBar)->SourceFileName(::STRINGS[5/*"SplashPage.ux"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(progressBar, 2);
    uPtr(progressBar)->Fill(temp7);
    temp8->Value(::STRINGS[6/*"original vi...*/]);
    temp8->FontSize(12.0f);
    temp8->TextAlignment(1);
    temp8->Margin(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp8->Opacity(0.5f);
    temp8->SourceLineNumber(17);
    temp8->SourceFileName(::STRINGS[5/*"SplashPage.ux"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp8, 3);
    temp9->RowCount(2);
    temp9->SourceLineNumber(19);
    temp9->SourceFileName(::STRINGS[5/*"SplashPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp10->SourceLineNumber(20);
    temp10->SourceFileName(::STRINGS[5/*"SplashPage.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp11->Value(::STRINGS[7/*"The Mood"*/]);
    temp11->FontSize(40.0f);
    temp11->Alignment(2);
    temp11->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    temp11->SourceLineNumber(21);
    temp11->SourceFileName(::STRINGS[5/*"SplashPage.ux"*/]);
    temp12->Value(::STRINGS[8/*"How are we ...*/]);
    temp12->Alignment(2);
    temp12->Opacity(0.5f);
    temp12->SourceLineNumber(22);
    temp12->SourceFileName(::STRINGS[5/*"SplashPage.ux"*/]);
    temp13->Text(::STRINGS[9/*"Aloitetaan"*/]);
    temp13->FontSize(18.0f);
    temp13->Alignment(8);
    temp13->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    temp13->SourceLineNumber(25);
    temp13->SourceFileName(::STRINGS[5/*"SplashPage.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp13, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    temp->SourceLineNumber(25);
    temp->SourceFileName(::STRINGS[5/*"SplashPage.ux"*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), progressBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
}

// public SplashPage New(Fuse.Navigation.Router router) [static] :18
SplashPage* SplashPage::New5(::g::Fuse::Navigation::Router* router1)
{
    SplashPage* obj1 = (SplashPage*)uNew(SplashPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
