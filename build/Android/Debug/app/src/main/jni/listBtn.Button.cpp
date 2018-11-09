// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/listBtn.Button.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.fa_check.h>
#include <_root.Haslaamispaivak-2263447d.h>
#include <_root.Haslaamispaivak-3e49a42.h>
#include <_root.Haslaamispaivak-55645331.h>
#include <_root.Haslaamispaivak-5b61e7ce.h>
#include <_root.Haslaamispaivak-5fc8c6f7.h>
#include <_root.Haslaamispaivak-641d77d0.h>
#include <_root.Haslaamispaivak-66aa8c36.h>
#include <_root.Haslaamispaivak-6becfdb3.h>
#include <_root.Haslaamispaivak-6ef2759c.h>
#include <_root.Haslaamispaivak-7249e982.h>
#include <_root.Haslaamispaivak-8c2039a.h>
#include <_root.Haslaamispaivak-a6712a70.h>
#include <_root.Haslaamispaivak-b2b137e5.h>
#include <_root.Haslaamispaivak-bed1540d.h>
#include <_root.Haslaamispaivak-e58dc677.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Layer.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Selection.Deselected.h>
#include <Fuse.Selection.Selectable.h>
#include <Fuse.Selection.ToggleSelection.h>
#include <Fuse.Selection.WhileSelected.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-d8fdd070.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <generaltext.Text.h>
#include <listBtn.Button.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[19];
static uType* TYPES[8];

namespace g{
namespace listBtn{

// public partial sealed class Button :4
// {
// static Button() :109
static void Button__cctor_4_fn(uType* __type)
{
    Button::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Color"*/]);
    Button::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"FontSize"*/]);
    Button::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Value"*/]);
    Button::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Opacity"*/]);
    Button::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"Send"*/]);
    Button::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"Visibility"*/]);
    Button::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"btnBackground"*/]);
    Button::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"checkIcon"*/]);
    Button::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"btnText"*/]);
}

static void Button_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Color");
    ::STRINGS[1] = uString::Const("FontSize");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("Opacity");
    ::STRINGS[4] = uString::Const("Send");
    ::STRINGS[5] = uString::Const("Visibility");
    ::STRINGS[6] = uString::Const("btnBackground");
    ::STRINGS[7] = uString::Const("checkIcon");
    ::STRINGS[8] = uString::Const("btnText");
    ::STRINGS[9] = uString::Const("#FFF");
    ::STRINGS[10] = uString::Const("#8bc34a");
    ::STRINGS[11] = uString::Const("Components/listBtn.ux");
    ::STRINGS[12] = uString::Const("While Selected!");
    ::STRINGS[13] = uString::Const("");
    ::STRINGS[14] = uString::Const("Tapped!");
    ::STRINGS[15] = uString::Const("BgColor");
    ::STRINGS[16] = uString::Const("DataKey");
    ::STRINGS[17] = uString::Const("SelectedBgColor");
    ::STRINGS[18] = uString::Const("Text");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Haslaamispaivakirja_accessor_listBtn_Button_BgColor_typeof(),
        ::g::Haslaamispaivakirja_accessor_listBtn_Button_DataKey_typeof(),
        ::g::Haslaamispaivakirja_accessor_listBtn_Button_FontSize_typeof(),
        ::g::Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor_typeof(),
        ::g::Haslaamispaivakirja_accessor_listBtn_Button_Text_typeof());
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
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(115,
        ::g::Uno::String_typeof(), offsetof(Button, _field_Send), 0,
        ::g::Uno::String_typeof(), offsetof(Button, _field_Text), 0,
        ::g::Uno::String_typeof(), offsetof(Button, _field_DataKey), 0,
        ::g::Uno::String_typeof(), offsetof(Button, _field_BgColor), 0,
        ::g::Uno::String_typeof(), offsetof(Button, _field_SelectedBgColor), 0,
        ::g::Uno::Float_typeof(), offsetof(Button, _field_FontSize), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(Button, btnBackground_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(Button, btnText_FontSize_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Button, btnText_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Button, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(Button, btnBackground_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(Button, btnText_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Button, this_Send_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(Button, checkIcon_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(Button, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Button, temp2_Value_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(Button, btnBackground), 0,
        ::g::fa_check_typeof(), offsetof(Button, checkIcon), 0,
        ::g::generaltext::Text_typeof(), offsetof(Button, btnText), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Button::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Button::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Button::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Button::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Button::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Button::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Button::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Button::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Button::__selector8_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Button_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 143;
    options.InterfaceCount = 19;
    options.DependencyCount = 6;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("listBtn.Button", options);
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New4_fn;
    type->fp_cctor_ = Button__cctor_4_fn;
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

// public Button() :113
void Button__ctor_7_fn(Button* __this)
{
    __this->ctor_7();
}

// public string get_BgColor() :55
void Button__get_BgColor_fn(Button* __this, uString** __retval)
{
    *__retval = __this->BgColor();
}

// public void set_BgColor(string value) :56
void Button__set_BgColor_fn(Button* __this, uString* value)
{
    __this->BgColor(value);
}

// public string get_DataKey() :40
void Button__get_DataKey_fn(Button* __this, uString** __retval)
{
    *__retval = __this->DataKey();
}

// public void set_DataKey(string value) :41
void Button__set_DataKey_fn(Button* __this, uString* value)
{
    __this->DataKey(value);
}

// public float get_FontSize() :85
void Button__get_FontSize_fn(Button* __this, float* __retval)
{
    *__retval = __this->FontSize();
}

// public void set_FontSize(float value) :86
void Button__set_FontSize_fn(Button* __this, float* value)
{
    __this->FontSize(*value);
}

// private void InitializeUX() :117
void Button__InitializeUX_fn(Button* __this)
{
    __this->InitializeUX();
}

// public Button New() :113
void Button__New4_fn(Button** __retval)
{
    *__retval = Button::New4();
}

// public string get_SelectedBgColor() :70
void Button__get_SelectedBgColor_fn(Button* __this, uString** __retval)
{
    *__retval = __this->SelectedBgColor();
}

// public void set_SelectedBgColor(string value) :71
void Button__set_SelectedBgColor_fn(Button* __this, uString* value)
{
    __this->SelectedBgColor(value);
}

// public string get_Send() :10
void Button__get_Send_fn(Button* __this, uString** __retval)
{
    *__retval = __this->Send();
}

// public void set_Send(string value) :11
void Button__set_Send_fn(Button* __this, uString* value)
{
    __this->Send(value);
}

// public void SetBgColor(string value, Uno.UX.IPropertyListener origin) :58
void Button__SetBgColor_fn(Button* __this, uString* value, uObject* origin)
{
    __this->SetBgColor(value, origin);
}

// public void SetDataKey(string value, Uno.UX.IPropertyListener origin) :43
void Button__SetDataKey_fn(Button* __this, uString* value, uObject* origin)
{
    __this->SetDataKey(value, origin);
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) :88
void Button__SetFontSize_fn(Button* __this, float* value, uObject* origin)
{
    __this->SetFontSize(*value, origin);
}

// public void SetSelectedBgColor(string value, Uno.UX.IPropertyListener origin) :73
void Button__SetSelectedBgColor_fn(Button* __this, uString* value, uObject* origin)
{
    __this->SetSelectedBgColor(value, origin);
}

// public void SetSend(string value, Uno.UX.IPropertyListener origin) :13
void Button__SetSend_fn(Button* __this, uString* value, uObject* origin)
{
    __this->SetSend(value, origin);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) :28
void Button__SetText_fn(Button* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public string get_Text() :25
void Button__get_Text_fn(Button* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :26
void Button__set_Text_fn(Button* __this, uString* value)
{
    __this->Text(value);
}

::g::Uno::UX::Selector Button::__selector0_;
::g::Uno::UX::Selector Button::__selector1_;
::g::Uno::UX::Selector Button::__selector2_;
::g::Uno::UX::Selector Button::__selector3_;
::g::Uno::UX::Selector Button::__selector4_;
::g::Uno::UX::Selector Button::__selector5_;
::g::Uno::UX::Selector Button::__selector6_;
::g::Uno::UX::Selector Button::__selector7_;
::g::Uno::UX::Selector Button::__selector8_;

// public Button() [instance] :113
void Button::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// public string get_BgColor() [instance] :55
uString* Button::BgColor()
{
    return _field_BgColor;
}

// public void set_BgColor(string value) [instance] :56
void Button::BgColor(uString* value)
{
    SetBgColor(value, NULL);
}

// public string get_DataKey() [instance] :40
uString* Button::DataKey()
{
    return _field_DataKey;
}

// public void set_DataKey(string value) [instance] :41
void Button::DataKey(uString* value)
{
    SetDataKey(value, NULL);
}

// public float get_FontSize() [instance] :85
float Button::FontSize()
{
    return _field_FontSize;
}

// public void set_FontSize(float value) [instance] :86
void Button::FontSize(float value)
{
    SetFontSize(value, NULL);
}

// private void InitializeUX() [instance] :117
void Button::InitializeUX()
{
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    btnBackground = ::g::Fuse::Controls::Rectangle::New3();
    btnBackground_Color_inst = ::g::Haslaamispaivakirja_FuseControlsShape_Color_Property::New1(btnBackground, Button::__selector0_);
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::Haslaamispaivakirja_accessor_listBtn_Button_BgColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    btnText = ::g::generaltext::Text::New4();
    btnText_FontSize_inst = ::g::Haslaamispaivakirja_FuseControlsTextControl_FontSize_Property::New1(btnText, Button::__selector1_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::Haslaamispaivakirja_accessor_listBtn_Button_FontSize::Singleton());
    ::g::Fuse::Reactive::Constant* temp7 = ::g::Fuse::Reactive::Constant::New1(this);
    btnText_Value_inst = ::g::Haslaamispaivakirja_FuseControlsTextControl_Value_Property::New1(btnText, Button::__selector2_);
    ::g::Fuse::Reactive::Property* temp8 = ::g::Fuse::Reactive::Property::New1(temp7, ::g::Haslaamispaivakirja_accessor_listBtn_Button_Text::Singleton());
    ::g::Fuse::Reactive::Constant* temp9 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Selection::Selectable* temp = ::g::Fuse::Selection::Selectable::New2();
    temp_Value_inst = ::g::Haslaamispaivakirja_FuseSelectionSelectable_Value_Property::New1(temp, Button::__selector2_);
    ::g::Fuse::Reactive::Property* temp10 = ::g::Fuse::Reactive::Property::New1(temp9, ::g::Haslaamispaivakirja_accessor_listBtn_Button_DataKey::Singleton());
    ::g::Fuse::Reactive::Constant* temp11 = ::g::Fuse::Reactive::Constant::New1(this);
    btnBackground_Opacity_inst = ::g::Haslaamispaivakirja_FuseElementsElement_Opacity_Property::New1(btnBackground, Button::__selector3_);
    btnText_Color_inst = ::g::Haslaamispaivakirja_FuseControlsTextControl_Color_Property::New1(btnText, Button::__selector0_);
    this_Send_inst = ::g::Haslaamispaivakirja_listBtnButton_Send_Property::New1(this, Button::__selector4_);
    ::g::Fuse::Reactive::Constant* temp12 = ::g::Fuse::Reactive::Constant::New1(this);
    checkIcon = ::g::fa_check::New4();
    checkIcon_Visibility_inst = ::g::Haslaamispaivakirja_FuseElementsElement_Visibility_Property::New1(checkIcon, Button::__selector5_);
    ::g::Fuse::Animations::Change* temp1 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], btnBackground_Color_inst);
    temp1_Value_inst = ::g::Haslaamispaivakirja_FuseAnimationsChangefloat4_Value_Property::New1(temp1, Button::__selector2_);
    ::g::Fuse::Reactive::Property* temp13 = ::g::Fuse::Reactive::Property::New1(temp11, ::g::Haslaamispaivakirja_accessor_listBtn_Button_SelectedBgColor::Singleton());
    ::g::Fuse::Triggers::Actions::Set* temp2 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<string>*/], this_Send_inst);
    temp2_Value_inst = ::g::Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property::New1(temp2, Button::__selector2_);
    ::g::Fuse::Reactive::Property* temp14 = ::g::Fuse::Reactive::Property::New1(temp12, ::g::Haslaamispaivakirja_accessor_listBtn_Button_DataKey::Singleton());
    ::g::Fuse::Effects::DropShadow* temp15 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(btnBackground_Color_inst, (uObject*)temp4, 1);
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(btnText_FontSize_inst, (uObject*)temp6, 1);
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(btnText_Value_inst, (uObject*)temp8, 1);
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp10, 3);
    ::g::Fuse::Selection::WhileSelected* temp20 = ::g::Fuse::Selection::WhileSelected::New2();
    ::g::Fuse::Triggers::Actions::DebugAction* temp21 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    ::g::Fuse::Animations::Change* temp22 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], btnBackground_Opacity_inst);
    ::g::Fuse::Animations::Change* temp23 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], btnText_Color_inst);
    ::g::Fuse::Animations::Scale* temp24 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Triggers::Actions::Set* temp25 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], checkIcon_Visibility_inst);
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp13, 1);
    ::g::Fuse::Reactive::DataBinding* temp27 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp14, 3);
    ::g::Fuse::Selection::Deselected* temp28 = ::g::Fuse::Selection::Deselected::New2();
    ::g::Fuse::Animations::Scale* temp29 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Triggers::Actions::Set* temp30 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<string>*/], this_Send_inst);
    ::g::Fuse::Triggers::Actions::Set* temp31 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[3/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], checkIcon_Visibility_inst);
    ::g::Fuse::Gestures::Tapped* temp32 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Triggers::Actions::DebugAction* temp33 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    ::g::Fuse::Animations::Change* temp34 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], btnBackground_Color_inst);
    ::g::Fuse::Selection::ToggleSelection* temp35 = ::g::Fuse::Selection::ToggleSelection::New2();
    BgColor(::STRINGS[9/*"#FFF"*/]);
    SelectedBgColor(::STRINGS[10/*"#8bc34a"*/]);
    FontSize(16.0f);
    Margin(::g::Uno::Float4__New2(0.0f, 3.0f, 0.0f, 3.0f));
    Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[11/*"Components/...*/]);
    uPtr(btnBackground)->CornerRadius(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(btnBackground)->Opacity(0.8f);
    uPtr(btnBackground)->Layer(1);
    uPtr(btnBackground)->Name(Button::__selector6_);
    uPtr(btnBackground)->SourceLineNumber(9);
    uPtr(btnBackground)->SourceFileName(::STRINGS[11/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(btnBackground)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(btnBackground)->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    temp15->Size(2.0f);
    temp15->Angle(90.0f);
    temp15->Distance(1.0f);
    temp15->Spread(0.2f);
    temp15->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3764706f));
    temp15->SourceLineNumber(10);
    temp15->SourceFileName(::STRINGS[11/*"Components/...*/]);
    temp4->SourceLineNumber(9);
    temp4->SourceFileName(::STRINGS[11/*"Components/...*/]);
    temp3->SourceLineNumber(9);
    temp3->SourceFileName(::STRINGS[11/*"Components/...*/]);
    uPtr(checkIcon)->FontSize(18.0f);
    uPtr(checkIcon)->TextAlignment(2);
    uPtr(checkIcon)->Color(::g::Uno::Float4__New2(0.07058824f, 0.372549f, 0.3882353f, 1.0f));
    uPtr(checkIcon)->Alignment(0);
    uPtr(checkIcon)->Visibility(2);
    uPtr(checkIcon)->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 10.0f, 0.0f));
    uPtr(checkIcon)->Opacity(1.0f);
    uPtr(checkIcon)->Name(Button::__selector7_);
    uPtr(checkIcon)->SourceLineNumber(13);
    uPtr(checkIcon)->SourceFileName(::STRINGS[11/*"Components/...*/]);
    uPtr(btnText)->TextAlignment(0);
    uPtr(btnText)->Color(::g::Uno::Float4__New2(0.4f, 0.4f, 0.4f, 1.0f));
    uPtr(btnText)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 35.0f, 0.0f));
    uPtr(btnText)->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(btnText)->Name(Button::__selector8_);
    uPtr(btnText)->SourceLineNumber(15);
    uPtr(btnText)->SourceFileName(::STRINGS[11/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(btnText)->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(btnText)->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp18);
    temp6->SourceLineNumber(15);
    temp6->SourceFileName(::STRINGS[11/*"Components/...*/]);
    temp5->SourceLineNumber(15);
    temp5->SourceFileName(::STRINGS[11/*"Components/...*/]);
    temp8->SourceLineNumber(15);
    temp8->SourceFileName(::STRINGS[11/*"Components/...*/]);
    temp7->SourceLineNumber(15);
    temp7->SourceFileName(::STRINGS[11/*"Components/...*/]);
    temp->SourceLineNumber(17);
    temp->SourceFileName(::STRINGS[11/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    temp10->SourceLineNumber(17);
    temp10->SourceFileName(::STRINGS[11/*"Components/...*/]);
    temp9->SourceLineNumber(17);
    temp9->SourceFileName(::STRINGS[11/*"Components/...*/]);
    temp20->SourceLineNumber(19);
    temp20->SourceFileName(::STRINGS[11/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    temp21->Message(::STRINGS[12/*"While Selec...*/]);
    temp21->SourceLineNumber(20);
    temp21->SourceFileName(::STRINGS[11/*"Components/...*/]);
    temp13->SourceLineNumber(21);
    temp13->SourceFileName(::STRINGS[11/*"Components/...*/]);
    temp11->SourceLineNumber(21);
    temp11->SourceFileName(::STRINGS[11/*"Components/...*/]);
    ::g::Fuse::Animations::Change__set_Value_fn(temp22, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp23, uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)));
    temp24->Factor(1.01f);
    temp24->Duration(0.08);
    temp24->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp2->SourceLineNumber(26);
    temp2->SourceFileName(::STRINGS[11/*"Components/...*/]);
    temp14->SourceLineNumber(26);
    temp14->SourceFileName(::STRINGS[11/*"Components/...*/]);
    temp12->SourceLineNumber(26);
    temp12->SourceFileName(::STRINGS[11/*"Components/...*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp25, uCRef<int32_t>(0));
    temp25->SourceLineNumber(27);
    temp25->SourceFileName(::STRINGS[11/*"Components/...*/]);
    temp28->SourceLineNumber(29);
    temp28->SourceFileName(::STRINGS[11/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp31);
    temp29->Factor(1.0f);
    temp29->Duration(0.08);
    temp29->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp30, ::STRINGS[13/*""*/]);
    temp30->SourceLineNumber(32);
    temp30->SourceFileName(::STRINGS[11/*"Components/...*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp31, uCRef<int32_t>(2));
    temp31->SourceLineNumber(33);
    temp31->SourceFileName(::STRINGS[11/*"Components/...*/]);
    temp32->SourceLineNumber(36);
    temp32->SourceFileName(::STRINGS[11/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp35);
    temp33->Message(::STRINGS[14/*"Tapped!"*/]);
    temp33->SourceLineNumber(37);
    temp33->SourceFileName(::STRINGS[11/*"Components/...*/]);
    ::g::Fuse::Animations::Change__set_Value_fn(temp34, uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)));
    temp34->Duration(0.08);
    temp35->SourceLineNumber(39);
    temp35->SourceFileName(::STRINGS[11/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), btnBackground);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), checkIcon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), btnText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
}

// public string get_SelectedBgColor() [instance] :70
uString* Button::SelectedBgColor()
{
    return _field_SelectedBgColor;
}

// public void set_SelectedBgColor(string value) [instance] :71
void Button::SelectedBgColor(uString* value)
{
    SetSelectedBgColor(value, NULL);
}

// public string get_Send() [instance] :10
uString* Button::Send()
{
    return _field_Send;
}

// public void set_Send(string value) [instance] :11
void Button::Send(uString* value)
{
    SetSend(value, NULL);
}

// public void SetBgColor(string value, Uno.UX.IPropertyListener origin) [instance] :58
void Button::SetBgColor(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_BgColor))
    {
        _field_BgColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[15/*"BgColor"*/]), origin);
    }
}

// public void SetDataKey(string value, Uno.UX.IPropertyListener origin) [instance] :43
void Button::SetDataKey(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_DataKey))
    {
        _field_DataKey = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[16/*"DataKey"*/]), origin);
    }
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) [instance] :88
void Button::SetFontSize(float value, uObject* origin)
{
    if (value != _field_FontSize)
    {
        _field_FontSize = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"FontSize"*/]), origin);
    }
}

// public void SetSelectedBgColor(string value, Uno.UX.IPropertyListener origin) [instance] :73
void Button::SetSelectedBgColor(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_SelectedBgColor))
    {
        _field_SelectedBgColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[17/*"SelectedBgC...*/]), origin);
    }
}

// public void SetSend(string value, Uno.UX.IPropertyListener origin) [instance] :13
void Button::SetSend(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Send))
    {
        _field_Send = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"Send"*/]), origin);
    }
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance] :28
void Button::SetText(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[18/*"Text"*/]), origin);
    }
}

// public string get_Text() [instance] :25
uString* Button::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance] :26
void Button::Text(uString* value)
{
    SetText(value, NULL);
}

// public Button New() [static] :113
Button* Button::New4()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

}} // ::g::listBtn
