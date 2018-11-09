// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/basic.TextBoxFakeDropDown.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-117b75b8.h>
#include <_root.Haslaamispaivak-30256519.h>
#include <_root.Haslaamispaivak-6ef2759c.h>
#include <_root.Haslaamispaivak-8c2039a.h>
#include <_root.Haslaamispaivak-9b5591bc.h>
#include <_root.Haslaamispaivak-9ca40d4f.h>
#include <_root.Haslaamispaivak-af42411.h>
#include <_root.Haslaamispaivak-b2b137e5.h>
#include <basic.TextBoxFakeDropDown.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[10];
static uType* TYPES[5];

namespace g{
namespace basic{

// public partial sealed class TextBoxFakeDropDown :4
// {
// static TextBoxFakeDropDown() :102
static void TextBoxFakeDropDown__cctor_5_fn(uType* __type)
{
    TextBoxFakeDropDown::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Send"*/]);
    TextBoxFakeDropDown::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Color"*/]);
    TextBoxFakeDropDown::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Value"*/]);
    TextBoxFakeDropDown::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"TextAlignment"*/]);
    TextBoxFakeDropDown::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"TextBoxFake...*/]);
}

static void TextBoxFakeDropDown_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Send");
    ::STRINGS[1] = uString::Const("Color");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("TextAlignment");
    ::STRINGS[4] = uString::Const("TextBoxFakeField");
    ::STRINGS[5] = uString::Const("entrystr");
    ::STRINGS[6] = uString::Const("#FFFFFFB2");
    ::STRINGS[7] = uString::Const("Components/basic.TextBoxFakeDropDown.ux");
    ::STRINGS[8] = uString::Const("DataKey");
    ::STRINGS[9] = uString::Const("PlaceHolderColor");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_PlaceHolderColor_typeof(),
        ::g::Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment_typeof(),
        ::g::Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface4),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Shape_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface10),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Shape_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface18),
        ::g::Fuse::Drawing::IDrawObjectWatcherFeedback_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface19));
    type->SetFields(117,
        ::g::Uno::String_typeof(), offsetof(TextBoxFakeDropDown, _field_Send), 0,
        ::g::Uno::String_typeof(), offsetof(TextBoxFakeDropDown, _field_DataKey), 0,
        ::g::Uno::String_typeof(), offsetof(TextBoxFakeDropDown, _field_Value), 0,
        ::g::Uno::String_typeof(), offsetof(TextBoxFakeDropDown, _field_TextAlignment), 0,
        ::g::Uno::String_typeof(), offsetof(TextBoxFakeDropDown, _field_PlaceHolderColor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(TextBoxFakeDropDown, this_Send_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(TextBoxFakeDropDown, TextBoxFakeField_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(TextBoxFakeDropDown, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(TextBoxFakeDropDown, TextBoxFakeField_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Controls::TextAlignment_typeof(), NULL), offsetof(TextBoxFakeDropDown, TextBoxFakeField_TextAlignment_inst), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(TextBoxFakeDropDown, TextBoxFakeField), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&TextBoxFakeDropDown::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&TextBoxFakeDropDown::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&TextBoxFakeDropDown::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&TextBoxFakeDropDown::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&TextBoxFakeDropDown::__selector4_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Shape_type* TextBoxFakeDropDown_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Rectangle_typeof();
    options.FieldCount = 133;
    options.InterfaceCount = 20;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(TextBoxFakeDropDown);
    options.TypeSize = sizeof(::g::Fuse::Controls::Shape_type);
    type = (::g::Fuse::Controls::Shape_type*)uClassType::New("basic.TextBoxFakeDropDown", options);
    type->fp_build_ = TextBoxFakeDropDown_build;
    type->fp_ctor_ = (void*)TextBoxFakeDropDown__New4_fn;
    type->fp_cctor_ = TextBoxFakeDropDown__cctor_5_fn;
    type->interface19.fp_Changed = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackChanged_fn;
    type->interface19.fp_Prepare = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackPrepare_fn;
    type->interface19.fp_Unprepare = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackUnprepare_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Shape__OnPropertyChanged2_fn;
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

// public TextBoxFakeDropDown() :106
void TextBoxFakeDropDown__ctor_8_fn(TextBoxFakeDropDown* __this)
{
    __this->ctor_8();
}

// public string get_DataKey() :25
void TextBoxFakeDropDown__get_DataKey_fn(TextBoxFakeDropDown* __this, uString** __retval)
{
    *__retval = __this->DataKey();
}

// public void set_DataKey(string value) :26
void TextBoxFakeDropDown__set_DataKey_fn(TextBoxFakeDropDown* __this, uString* value)
{
    __this->DataKey(value);
}

// private void InitializeUX() :110
void TextBoxFakeDropDown__InitializeUX_fn(TextBoxFakeDropDown* __this)
{
    __this->InitializeUX();
}

// public TextBoxFakeDropDown New() :106
void TextBoxFakeDropDown__New4_fn(TextBoxFakeDropDown** __retval)
{
    *__retval = TextBoxFakeDropDown::New4();
}

// public string get_PlaceHolderColor() :70
void TextBoxFakeDropDown__get_PlaceHolderColor_fn(TextBoxFakeDropDown* __this, uString** __retval)
{
    *__retval = __this->PlaceHolderColor();
}

// public void set_PlaceHolderColor(string value) :71
void TextBoxFakeDropDown__set_PlaceHolderColor_fn(TextBoxFakeDropDown* __this, uString* value)
{
    __this->PlaceHolderColor(value);
}

// public string get_Send() :10
void TextBoxFakeDropDown__get_Send_fn(TextBoxFakeDropDown* __this, uString** __retval)
{
    *__retval = __this->Send();
}

// public void set_Send(string value) :11
void TextBoxFakeDropDown__set_Send_fn(TextBoxFakeDropDown* __this, uString* value)
{
    __this->Send(value);
}

// public void SetDataKey(string value, Uno.UX.IPropertyListener origin) :28
void TextBoxFakeDropDown__SetDataKey_fn(TextBoxFakeDropDown* __this, uString* value, uObject* origin)
{
    __this->SetDataKey(value, origin);
}

// public void SetPlaceHolderColor(string value, Uno.UX.IPropertyListener origin) :73
void TextBoxFakeDropDown__SetPlaceHolderColor_fn(TextBoxFakeDropDown* __this, uString* value, uObject* origin)
{
    __this->SetPlaceHolderColor(value, origin);
}

// public void SetSend(string value, Uno.UX.IPropertyListener origin) :13
void TextBoxFakeDropDown__SetSend_fn(TextBoxFakeDropDown* __this, uString* value, uObject* origin)
{
    __this->SetSend(value, origin);
}

// public void SetTextAlignment(string value, Uno.UX.IPropertyListener origin) :58
void TextBoxFakeDropDown__SetTextAlignment_fn(TextBoxFakeDropDown* __this, uString* value, uObject* origin)
{
    __this->SetTextAlignment(value, origin);
}

// public void SetValue(string value, Uno.UX.IPropertyListener origin) :43
void TextBoxFakeDropDown__SetValue_fn(TextBoxFakeDropDown* __this, uString* value, uObject* origin)
{
    __this->SetValue(value, origin);
}

// public string get_TextAlignment() :55
void TextBoxFakeDropDown__get_TextAlignment_fn(TextBoxFakeDropDown* __this, uString** __retval)
{
    *__retval = __this->TextAlignment();
}

// public void set_TextAlignment(string value) :56
void TextBoxFakeDropDown__set_TextAlignment_fn(TextBoxFakeDropDown* __this, uString* value)
{
    __this->TextAlignment(value);
}

// public string get_Value() :40
void TextBoxFakeDropDown__get_Value_fn(TextBoxFakeDropDown* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(string value) :41
void TextBoxFakeDropDown__set_Value_fn(TextBoxFakeDropDown* __this, uString* value)
{
    __this->Value(value);
}

::g::Uno::UX::Selector TextBoxFakeDropDown::__selector0_;
::g::Uno::UX::Selector TextBoxFakeDropDown::__selector1_;
::g::Uno::UX::Selector TextBoxFakeDropDown::__selector2_;
::g::Uno::UX::Selector TextBoxFakeDropDown::__selector3_;
::g::Uno::UX::Selector TextBoxFakeDropDown::__selector4_;

// public TextBoxFakeDropDown() [instance] :106
void TextBoxFakeDropDown::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// public string get_DataKey() [instance] :25
uString* TextBoxFakeDropDown::DataKey()
{
    return _field_DataKey;
}

// public void set_DataKey(string value) [instance] :26
void TextBoxFakeDropDown::DataKey(uString* value)
{
    SetDataKey(value, NULL);
}

// private void InitializeUX() [instance] :110
void TextBoxFakeDropDown::InitializeUX()
{
    this_Send_inst = ::g::Haslaamispaivakirja_basicTextBoxFakeDropDown_Send_Property::New1(this, TextBoxFakeDropDown::__selector0_);
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    TextBoxFakeField = ::g::Fuse::Controls::Text::New3();
    TextBoxFakeField_Color_inst = ::g::Haslaamispaivakirja_FuseControlsTextControl_Color_Property::New1(TextBoxFakeField, TextBoxFakeDropDown::__selector1_);
    ::g::Fuse::Triggers::Actions::Set* temp = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<string>*/], this_Send_inst);
    temp_Value_inst = ::g::Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property::New1(temp, TextBoxFakeDropDown::__selector2_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value::Singleton());
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    TextBoxFakeField_Value_inst = ::g::Haslaamispaivakirja_FuseControlsTextControl_Value_Property::New1(TextBoxFakeField, TextBoxFakeDropDown::__selector2_);
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_Value::Singleton());
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    TextBoxFakeField_TextAlignment_inst = ::g::Haslaamispaivakirja_FuseControlsTextControl_TextAlignment_Property::New1(TextBoxFakeField, TextBoxFakeDropDown::__selector3_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_TextAlignment::Singleton());
    ::g::Fuse::Reactive::Constant* temp7 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp8 = ::g::Fuse::Reactive::Property::New1(temp7, ::g::Haslaamispaivakirja_accessor_basic_TextBoxFakeDropDown_PlaceHolderColor::Singleton());
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"entrystr"*/]);
    ::g::Fuse::Gestures::Clicked* temp10 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp11 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<float4>*/], TextBoxFakeField_Color_inst);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 3);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(TextBoxFakeField_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(TextBoxFakeField_TextAlignment_inst, (uObject*)temp6, 3);
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(TextBoxFakeField_Color_inst, (uObject*)temp8, 3);
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(this_Send_inst, (uObject*)temp9, 3);
    PlaceHolderColor(::STRINGS[6/*"#FFFFFFB2"*/]);
    Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.09803922f));
    Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[7/*"Components/...*/]);
    uPtr(TextBoxFakeField)->TextColor(::g::Fuse::Drawing::Colors::White());
    uPtr(TextBoxFakeField)->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(TextBoxFakeField)->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(TextBoxFakeField)->Name(TextBoxFakeDropDown::__selector4_);
    uPtr(TextBoxFakeField)->SourceLineNumber(10);
    uPtr(TextBoxFakeField)->SourceFileName(::STRINGS[7/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TextBoxFakeField)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TextBoxFakeField)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TextBoxFakeField)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TextBoxFakeField)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp10->SourceLineNumber(11);
    temp10->SourceFileName(::STRINGS[7/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp->SourceLineNumber(13);
    temp->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp2->SourceLineNumber(13);
    temp2->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp1->SourceLineNumber(13);
    temp1->SourceFileName(::STRINGS[7/*"Components/...*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp11, uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)));
    temp11->SourceLineNumber(14);
    temp11->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp4->SourceLineNumber(10);
    temp4->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp3->SourceLineNumber(10);
    temp3->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp6->SourceLineNumber(10);
    temp6->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp5->SourceLineNumber(10);
    temp5->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp8->SourceLineNumber(10);
    temp8->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp7->SourceLineNumber(10);
    temp7->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp9->SourceLineNumber(1);
    temp9->SourceFileName(::STRINGS[7/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), TextBoxFakeField);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
}

// public string get_PlaceHolderColor() [instance] :70
uString* TextBoxFakeDropDown::PlaceHolderColor()
{
    return _field_PlaceHolderColor;
}

// public void set_PlaceHolderColor(string value) [instance] :71
void TextBoxFakeDropDown::PlaceHolderColor(uString* value)
{
    SetPlaceHolderColor(value, NULL);
}

// public string get_Send() [instance] :10
uString* TextBoxFakeDropDown::Send()
{
    return _field_Send;
}

// public void set_Send(string value) [instance] :11
void TextBoxFakeDropDown::Send(uString* value)
{
    SetSend(value, NULL);
}

// public void SetDataKey(string value, Uno.UX.IPropertyListener origin) [instance] :28
void TextBoxFakeDropDown::SetDataKey(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_DataKey))
    {
        _field_DataKey = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"DataKey"*/]), origin);
    }
}

// public void SetPlaceHolderColor(string value, Uno.UX.IPropertyListener origin) [instance] :73
void TextBoxFakeDropDown::SetPlaceHolderColor(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_PlaceHolderColor))
    {
        _field_PlaceHolderColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[9/*"PlaceHolder...*/]), origin);
    }
}

// public void SetSend(string value, Uno.UX.IPropertyListener origin) [instance] :13
void TextBoxFakeDropDown::SetSend(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Send))
    {
        _field_Send = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Send"*/]), origin);
    }
}

// public void SetTextAlignment(string value, Uno.UX.IPropertyListener origin) [instance] :58
void TextBoxFakeDropDown::SetTextAlignment(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_TextAlignment))
    {
        _field_TextAlignment = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"TextAlignment"*/]), origin);
    }
}

// public void SetValue(string value, Uno.UX.IPropertyListener origin) [instance] :43
void TextBoxFakeDropDown::SetValue(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Value))
    {
        _field_Value = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Value"*/]), origin);
    }
}

// public string get_TextAlignment() [instance] :55
uString* TextBoxFakeDropDown::TextAlignment()
{
    return _field_TextAlignment;
}

// public void set_TextAlignment(string value) [instance] :56
void TextBoxFakeDropDown::TextAlignment(uString* value)
{
    SetTextAlignment(value, NULL);
}

// public string get_Value() [instance] :40
uString* TextBoxFakeDropDown::Value()
{
    return _field_Value;
}

// public void set_Value(string value) [instance] :41
void TextBoxFakeDropDown::Value(uString* value)
{
    SetValue(value, NULL);
}

// public TextBoxFakeDropDown New() [static] :106
TextBoxFakeDropDown* TextBoxFakeDropDown::New4()
{
    TextBoxFakeDropDown* obj1 = (TextBoxFakeDropDown*)uNew(TextBoxFakeDropDown_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}} // ::g::basic
