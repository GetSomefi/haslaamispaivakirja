// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/FlyingDock.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.fa_chevron_left.h>
#include <_root.fa_cog.h>
#include <_root.fa_home.h>
#include <_root.FlyingDock.h>
#include <_root.Haslaamispaivak-4f321fb2.h>
#include <_root.Haslaamispaivak-7249e982.h>
#include <_root.Haslaamispaivak-a8299899.h>
#include <_root.Haslaamispaivak-bb9c6d74.h>
#include <_root.Haslaamispaivak-d3464ec1.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileString.h>
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
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[22];
static uType* TYPES[10];

namespace g{

// public partial sealed class FlyingDock :2
// {
// static FlyingDock() :44
static void FlyingDock__cctor_4_fn(uType* __type)
{
    FlyingDock::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"home"*/], ::STRINGS[2/*"temp_eb12"*/], ::STRINGS[3/*"back"*/], ::STRINGS[4/*"temp_eb13"*/], ::STRINGS[5/*"temp_eb14"*/], ::STRINGS[6/*"settings"*/], ::STRINGS[7/*"temp_eb15"*/]);
    FlyingDock::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"title"*/]);
    FlyingDock::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[9/*"Visibility"*/]);
    FlyingDock::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[10/*"Value"*/]);
    FlyingDock::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"home"*/]);
    FlyingDock::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"back"*/]);
    FlyingDock::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"settings"*/]);
}

static void FlyingDock_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("home");
    ::STRINGS[2] = uString::Const("temp_eb12");
    ::STRINGS[3] = uString::Const("back");
    ::STRINGS[4] = uString::Const("temp_eb13");
    ::STRINGS[5] = uString::Const("temp_eb14");
    ::STRINGS[6] = uString::Const("settings");
    ::STRINGS[7] = uString::Const("temp_eb15");
    ::STRINGS[8] = uString::Const("title");
    ::STRINGS[9] = uString::Const("Visibility");
    ::STRINGS[10] = uString::Const("Value");
    ::STRINGS[11] = uString::Const("goHome");
    ::STRINGS[12] = uString::Const("goBack");
    ::STRINGS[13] = uString::Const("goSplash");
    ::STRINGS[14] = uString::Const("goSettings");
    ::STRINGS[15] = uString::Const("Components/FlyingDock.ux");
    ::STRINGS[16] = uString::Const("50");
    ::STRINGS[17] = uString::Const("1*,4*,1*");
    ::STRINGS[18] = uString::Const("auto");
    ::STRINGS[19] = uString::Const("The Mood");
    ::STRINGS[20] = uString::Const("Home");
    ::STRINGS[21] = uString::Const("Settings");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Haslaamispaivakirja_accessor_FlyingDock_title_typeof(),
        ::g::Haslaamispaivakirja_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
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
    type->SetFields(115,
        ::g::Uno::String_typeof(), offsetof(FlyingDock, _field_title), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(FlyingDock, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(FlyingDock, home_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(FlyingDock, back_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(FlyingDock, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(FlyingDock, settings_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(FlyingDock, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(FlyingDock, this_title_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(FlyingDock, home), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FlyingDock, temp_eb12), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(FlyingDock, back), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FlyingDock, temp_eb13), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FlyingDock, temp_eb14), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(FlyingDock, settings), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(FlyingDock, temp_eb15), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(FlyingDock, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&FlyingDock::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FlyingDock::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FlyingDock::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FlyingDock::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FlyingDock::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FlyingDock::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FlyingDock::__selector5_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* FlyingDock_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 138;
    options.InterfaceCount = 19;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(FlyingDock);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("FlyingDock", options);
    type->fp_build_ = FlyingDock_build;
    type->fp_cctor_ = FlyingDock__cctor_4_fn;
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

// public FlyingDock(Fuse.Navigation.Router router) :48
void FlyingDock__ctor_7_fn(FlyingDock* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_7(router1);
}

// private void InitializeUX() :54
void FlyingDock__InitializeUX_fn(FlyingDock* __this)
{
    __this->InitializeUX();
}

// public FlyingDock New(Fuse.Navigation.Router router) :48
void FlyingDock__New4_fn(::g::Fuse::Navigation::Router* router1, FlyingDock** __retval)
{
    *__retval = FlyingDock::New4(router1);
}

// public void Settitle(string value, Uno.UX.IPropertyListener origin) :11
void FlyingDock__Settitle_fn(FlyingDock* __this, uString* value, uObject* origin)
{
    __this->Settitle(value, origin);
}

// public string get_title() :8
void FlyingDock__get_title_fn(FlyingDock* __this, uString** __retval)
{
    *__retval = __this->title();
}

// public void set_title(string value) :9
void FlyingDock__set_title_fn(FlyingDock* __this, uString* value)
{
    __this->title(value);
}

uSStrong<uArray*> FlyingDock::__g_static_nametable1_;
::g::Uno::UX::Selector FlyingDock::__selector0_;
::g::Uno::UX::Selector FlyingDock::__selector1_;
::g::Uno::UX::Selector FlyingDock::__selector2_;
::g::Uno::UX::Selector FlyingDock::__selector3_;
::g::Uno::UX::Selector FlyingDock::__selector4_;
::g::Uno::UX::Selector FlyingDock::__selector5_;

// public FlyingDock(Fuse.Navigation.Router router) [instance] :48
void FlyingDock::ctor_7(::g::Fuse::Navigation::Router* router1)
{
    ctor_6();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :54
void FlyingDock::InitializeUX()
{
    this_title_inst = ::g::Haslaamispaivakirja_FlyingDock_title_Property::New1(this, FlyingDock::__selector0_);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, FlyingDock::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"goHome"*/]);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"goBack"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"goSplash"*/]);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"goSettings"*/]);
    home = ::g::Fuse::Controls::Rectangle::New3();
    home_Visibility_inst = ::g::Haslaamispaivakirja_FuseElementsElement_Visibility_Property::New1(home, FlyingDock::__selector1_);
    back = ::g::Fuse::Controls::Rectangle::New3();
    back_Visibility_inst = ::g::Haslaamispaivakirja_FuseElementsElement_Visibility_Property::New1(back, FlyingDock::__selector1_);
    ::g::Fuse::Reactive::Constant* temp6 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Triggers::WhileString* temp = ::g::Fuse::Triggers::WhileString::New2();
    temp_Value_inst = ::g::Haslaamispaivakirja_FuseTriggersWhileString_Value_Property::New1(temp, FlyingDock::__selector2_);
    ::g::Fuse::Reactive::Property* temp7 = ::g::Fuse::Reactive::Property::New1(temp6, ::g::Haslaamispaivakirja_accessor_FlyingDock_title::Singleton());
    settings = ::g::Fuse::Controls::Rectangle::New3();
    settings_Visibility_inst = ::g::Haslaamispaivakirja_FuseElementsElement_Visibility_Property::New1(settings, FlyingDock::__selector1_);
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Triggers::WhileString* temp1 = ::g::Fuse::Triggers::WhileString::New2();
    temp1_Value_inst = ::g::Haslaamispaivakirja_FuseTriggersWhileString_Value_Property::New1(temp1, FlyingDock::__selector2_);
    ::g::Fuse::Reactive::Property* temp9 = ::g::Fuse::Reactive::Property::New1(temp8, ::g::Haslaamispaivakirja_accessor_FlyingDock_title::Singleton());
    ::g::Fuse::Reactive::JavaScript* temp10 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp11 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp12 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::LinearGradient* temp13 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp14 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp15 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Controls::Grid* temp16 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp17 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::fa_home* temp18 = ::g::fa_home::New4();
    temp_eb12 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    ::g::fa_chevron_left* temp19 = ::g::fa_chevron_left::New4();
    temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    ::g::Fuse::Controls::StackPanel* temp20 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::header::Text* temp21 = ::g::header::Text::New4();
    temp_eb14 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::Fuse::Controls::StackPanel* temp22 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::fa_cog* temp23 = ::g::fa_cog::New4();
    temp_eb15 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5);
    ::g::Fuse::Animations::Change* temp24 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], home_Visibility_inst);
    ::g::Fuse::Animations::Change* temp25 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], back_Visibility_inst);
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp7, 3);
    ::g::Fuse::Animations::Change* temp27 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], settings_Visibility_inst);
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp9, 3);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[15/*"Components/...*/]);
    temp10->LineNumber(4);
    temp10->FileName(::STRINGS[15/*"Components/...*/]);
    temp10->SourceLineNumber(4);
    temp10->SourceFileName(::STRINGS[15/*"Components/...*/]);
    temp10->File(::g::Uno::UX::BundleFileSource::New1(::g::Haslaamispaivakirja_bundle::FlyingDockdbd892b5()));
    temp11->Alignment(4);
    temp11->Layer(3);
    temp11->SourceLineNumber(5);
    temp11->SourceFileName(::STRINGS[15/*"Components/...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp11, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp12->SourceLineNumber(6);
    temp12->SourceFileName(::STRINGS[15/*"Components/...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp12, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Fills()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Stops()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Stops()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp15);
    temp14->Offset(0.0f);
    temp14->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3490196f));
    temp15->Offset(1.0f);
    temp15->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp16->DefaultRow(::STRINGS[16/*"50"*/]);
    temp16->Columns(::STRINGS[17/*"1*,4*,1*"*/]);
    temp16->DefaultColumn(::STRINGS[18/*"auto"*/]);
    temp16->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 15.0f));
    temp16->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp16->SourceLineNumber(12);
    temp16->SourceFileName(::STRINGS[15/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    temp17->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp17->SourceLineNumber(13);
    temp17->SourceFileName(::STRINGS[15/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), home);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), back);
    uPtr(home)->HitTestMode(2);
    uPtr(home)->Name(FlyingDock::__selector3_);
    uPtr(home)->SourceLineNumber(14);
    uPtr(home)->SourceFileName(::STRINGS[15/*"Components/...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(home, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb12)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(home)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(home)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb12);
    temp18->FontSize(18.0f);
    temp18->TextAlignment(0);
    temp18->Color(::g::Fuse::Drawing::Colors::White());
    temp18->Alignment(0);
    temp18->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 5.0f, 5.0f));
    temp18->Opacity(1.0f);
    temp18->SourceLineNumber(15);
    temp18->SourceFileName(::STRINGS[15/*"Components/...*/]);
    temp2->SourceLineNumber(14);
    temp2->SourceFileName(::STRINGS[15/*"Components/...*/]);
    uPtr(back)->HitTestMode(2);
    uPtr(back)->Visibility(1);
    uPtr(back)->Name(FlyingDock::__selector4_);
    uPtr(back)->SourceLineNumber(17);
    uPtr(back)->SourceFileName(::STRINGS[15/*"Components/...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(back, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb13)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(back)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(back)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb13);
    temp19->FontSize(18.0f);
    temp19->TextAlignment(0);
    temp19->Color(::g::Fuse::Drawing::Colors::White());
    temp19->Alignment(0);
    temp19->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 5.0f, 5.0f));
    temp19->Opacity(1.0f);
    temp19->SourceLineNumber(18);
    temp19->SourceFileName(::STRINGS[15/*"Components/...*/]);
    temp3->SourceLineNumber(17);
    temp3->SourceFileName(::STRINGS[15/*"Components/...*/]);
    temp20->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp20->SourceLineNumber(22);
    temp20->SourceFileName(::STRINGS[15/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp21->Value(::STRINGS[19/*"The Mood"*/]);
    temp21->FontSize(20.0f);
    temp21->TextAlignment(1);
    temp21->Alignment(0);
    temp21->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 0.0f, 0.0f));
    temp21->SourceLineNumber(23);
    temp21->SourceFileName(::STRINGS[15/*"Components/...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp21, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb14)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb14);
    temp4->SourceLineNumber(23);
    temp4->SourceFileName(::STRINGS[15/*"Components/...*/]);
    temp22->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp22->SourceLineNumber(26);
    temp22->SourceFileName(::STRINGS[15/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), settings);
    uPtr(settings)->HitTestMode(2);
    uPtr(settings)->Name(FlyingDock::__selector5_);
    uPtr(settings)->SourceLineNumber(27);
    uPtr(settings)->SourceFileName(::STRINGS[15/*"Components/...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(settings, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb15)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(settings)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(settings)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb15);
    temp23->FontSize(18.0f);
    temp23->TextAlignment(2);
    temp23->Color(::g::Fuse::Drawing::Colors::White());
    temp23->Alignment(0);
    temp23->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 10.0f, 5.0f));
    temp23->Opacity(1.0f);
    temp23->SourceLineNumber(28);
    temp23->SourceFileName(::STRINGS[15/*"Components/...*/]);
    temp5->SourceLineNumber(27);
    temp5->SourceFileName(::STRINGS[15/*"Components/...*/]);
    temp->Equals2(::STRINGS[20/*"Home"*/]);
    temp->SourceLineNumber(35);
    temp->SourceFileName(::STRINGS[15/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    ::g::Fuse::Animations::Change__set_Value_fn(temp24, uCRef<int32_t>(1));
    ::g::Fuse::Animations::Change__set_Value_fn(temp25, uCRef<int32_t>(0));
    temp7->SourceLineNumber(35);
    temp7->SourceFileName(::STRINGS[15/*"Components/...*/]);
    temp6->SourceLineNumber(35);
    temp6->SourceFileName(::STRINGS[15/*"Components/...*/]);
    temp1->Equals2(::STRINGS[21/*"Settings"*/]);
    temp1->SourceLineNumber(39);
    temp1->SourceFileName(::STRINGS[15/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    ::g::Fuse::Animations::Change__set_Value_fn(temp27, uCRef<int32_t>(1));
    temp9->SourceLineNumber(39);
    temp9->SourceFileName(::STRINGS[15/*"Components/...*/]);
    temp8->SourceLineNumber(39);
    temp8->SourceFileName(::STRINGS[15/*"Components/...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), home);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), back);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), settings);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[9/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_title_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
}

// public void Settitle(string value, Uno.UX.IPropertyListener origin) [instance] :11
void FlyingDock::Settitle(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_title))
    {
        _field_title = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"title"*/]), origin);
    }
}

// public string get_title() [instance] :8
uString* FlyingDock::title()
{
    return _field_title;
}

// public void set_title(string value) [instance] :9
void FlyingDock::title(uString* value)
{
    Settitle(value, NULL);
}

// public FlyingDock New(Fuse.Navigation.Router router) [static] :48
FlyingDock* FlyingDock::New4(::g::Fuse::Navigation::Router* router1)
{
    FlyingDock* obj1 = (FlyingDock*)uNew(FlyingDock_typeof());
    obj1->ctor_7(router1);
    return obj1;
}
// }

} // ::g
