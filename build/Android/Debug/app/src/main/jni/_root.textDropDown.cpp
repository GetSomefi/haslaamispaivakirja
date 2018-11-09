// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/textDropDown.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.fa_times.h>
#include <_root.Haslaamispaivak-13e9c6f4.h>
#include <_root.Haslaamispaivak-3748e7ab.h>
#include <_root.Haslaamispaivak-3bd8d75.h>
#include <_root.Haslaamispaivak-53549fe9.h>
#include <_root.Haslaamispaivak-55645331.h>
#include <_root.Haslaamispaivak-662c91db.h>
#include <_root.Haslaamispaivak-7249e982.h>
#include <_root.Haslaamispaivak-9fe873d7.h>
#include <_root.Haslaamispaivak-ba128f47.h>
#include <_root.Haslaamispaivak-ba57d52e.h>
#include <_root.Haslaamispaivak-ca052529.h>
#include <_root.Haslaamispaivak-e26ae841.h>
#include <_root.textDropDown.h>
#include <_root.textDropDown.Template.h>
#include <_root.textDropDown.Template1.h>
#include <basic.TextBoxFakeDropDown.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class textDropDown :2
// {
// static textDropDown() :216
static void textDropDown__cctor_4_fn(uType* __type)
{
    textDropDown::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 5, uString::Const("temp_eb21"), uString::Const("DropDownShow"), uString::Const("DropDownTheList"), uString::Const("closeDropDown"), uString::Const("temp_eb22"));
    textDropDown::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("dropDownList"));
    textDropDown::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Send"));
    textDropDown::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("SendName"));
    textDropDown::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value"));
    textDropDown::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Name"));
    textDropDown::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("DataKey"));
    textDropDown::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    textDropDown::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Visibility"));
    textDropDown::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Opacity"));
    textDropDown::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("DropDownShow"));
    textDropDown::__selector10_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("DropDownTheList"));
    textDropDown::__selector11_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("closeDropDown"));
}

static void textDropDown_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Haslaamispaivakirja_accessor_textDropDown_dropDownList_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(115,
        uObject_typeof(), offsetof(textDropDown, _field_dropDownList), 0,
        ::g::Uno::String_typeof(), offsetof(textDropDown, _field_Send), 0,
        ::g::Uno::String_typeof(), offsetof(textDropDown, _field_SendName), 0,
        ::g::Uno::String_typeof(), offsetof(textDropDown, _field_Value), 0,
        ::g::Uno::String_typeof(), offsetof(textDropDown, _field_Name), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(textDropDown, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(textDropDown, temp_DataKey_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(textDropDown, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(textDropDown, DropDownShow_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(textDropDown, DropDownShow_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(textDropDown, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(textDropDown, this_dropDownList_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(textDropDown, this_Send_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(textDropDown, this_SendName_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(textDropDown, this_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(textDropDown, this_Name_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(textDropDown, temp_eb21), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(textDropDown, DropDownShow), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(textDropDown, DropDownTheList), 0,
        ::g::fa_times_typeof(), offsetof(textDropDown, closeDropDown), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(textDropDown, temp_eb22), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(textDropDown, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&textDropDown::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown::__selector11_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* textDropDown_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 150;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(textDropDown);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("textDropDown", options);
    type->fp_build_ = textDropDown_build;
    type->fp_ctor_ = (void*)textDropDown__New4_fn;
    type->fp_cctor_ = textDropDown__cctor_4_fn;
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

// public textDropDown() :220
void textDropDown__ctor_7_fn(textDropDown* __this)
{
    __this->ctor_7();
}

// public object get_dropDownList() :8
void textDropDown__get_dropDownList_fn(textDropDown* __this, uObject** __retval)
{
    *__retval = __this->dropDownList();
}

// public void set_dropDownList(object value) :9
void textDropDown__set_dropDownList_fn(textDropDown* __this, uObject* value)
{
    __this->dropDownList(value);
}

// private void InitializeUX() :224
void textDropDown__InitializeUX_fn(textDropDown* __this)
{
    __this->InitializeUX();
}

// public string get_Name() :68
void textDropDown__get_Name1_fn(textDropDown* __this, uString** __retval)
{
    *__retval = __this->Name1();
}

// public void set_Name(string value) :69
void textDropDown__set_Name1_fn(textDropDown* __this, uString* value)
{
    __this->Name1(value);
}

// public textDropDown New() :220
void textDropDown__New4_fn(textDropDown** __retval)
{
    *__retval = textDropDown::New4();
}

// public string get_Send() :23
void textDropDown__get_Send_fn(textDropDown* __this, uString** __retval)
{
    *__retval = __this->Send();
}

// public void set_Send(string value) :24
void textDropDown__set_Send_fn(textDropDown* __this, uString* value)
{
    __this->Send(value);
}

// public string get_SendName() :38
void textDropDown__get_SendName_fn(textDropDown* __this, uString** __retval)
{
    *__retval = __this->SendName();
}

// public void set_SendName(string value) :39
void textDropDown__set_SendName_fn(textDropDown* __this, uString* value)
{
    __this->SendName(value);
}

// public void SetdropDownList(object value, Uno.UX.IPropertyListener origin) :11
void textDropDown__SetdropDownList_fn(textDropDown* __this, uObject* value, uObject* origin)
{
    __this->SetdropDownList(value, origin);
}

// public void SetName(string value, Uno.UX.IPropertyListener origin) :71
void textDropDown__SetName_fn(textDropDown* __this, uString* value, uObject* origin)
{
    __this->SetName(value, origin);
}

// public void SetSend(string value, Uno.UX.IPropertyListener origin) :26
void textDropDown__SetSend_fn(textDropDown* __this, uString* value, uObject* origin)
{
    __this->SetSend(value, origin);
}

// public void SetSendName(string value, Uno.UX.IPropertyListener origin) :41
void textDropDown__SetSendName_fn(textDropDown* __this, uString* value, uObject* origin)
{
    __this->SetSendName(value, origin);
}

// public void SetValue(string value, Uno.UX.IPropertyListener origin) :56
void textDropDown__SetValue_fn(textDropDown* __this, uString* value, uObject* origin)
{
    __this->SetValue(value, origin);
}

// public string get_Value() :53
void textDropDown__get_Value_fn(textDropDown* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(string value) :54
void textDropDown__set_Value_fn(textDropDown* __this, uString* value)
{
    __this->Value(value);
}

uSStrong<uArray*> textDropDown::__g_static_nametable1_;
::g::Uno::UX::Selector textDropDown::__selector0_;
::g::Uno::UX::Selector textDropDown::__selector1_;
::g::Uno::UX::Selector textDropDown::__selector2_;
::g::Uno::UX::Selector textDropDown::__selector3_;
::g::Uno::UX::Selector textDropDown::__selector4_;
::g::Uno::UX::Selector textDropDown::__selector5_;
::g::Uno::UX::Selector textDropDown::__selector6_;
::g::Uno::UX::Selector textDropDown::__selector7_;
::g::Uno::UX::Selector textDropDown::__selector8_;
::g::Uno::UX::Selector textDropDown::__selector9_;
::g::Uno::UX::Selector textDropDown::__selector10_;
::g::Uno::UX::Selector textDropDown::__selector11_;

// public textDropDown() [instance] :220
void textDropDown::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// public object get_dropDownList() [instance] :8
uObject* textDropDown::dropDownList()
{
    return _field_dropDownList;
}

// public void set_dropDownList(object value) [instance] :9
void textDropDown::dropDownList(uObject* value)
{
    SetdropDownList(value, NULL);
}

// private void InitializeUX() [instance] :224
void textDropDown::InitializeUX()
{
    this_dropDownList_inst = ::g::Haslaamispaivakirja_textDropDown_dropDownList_Property::New1(this, textDropDown::__selector0_);
    this_Send_inst = ::g::Haslaamispaivakirja_textDropDown_Send_Property::New1(this, textDropDown::__selector1_);
    this_SendName_inst = ::g::Haslaamispaivakirja_textDropDown_SendName_Property::New1(this, textDropDown::__selector2_);
    this_Value_inst = ::g::Haslaamispaivakirja_textDropDown_Value_Property::New1(this, textDropDown::__selector3_);
    this_Name_inst = ::g::Haslaamispaivakirja_textDropDown_Name_Property::New1(this, textDropDown::__selector4_);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, textDropDown::__g_static_nametable1_);
    ::g::basic::TextBoxFakeDropDown* temp = ::g::basic::TextBoxFakeDropDown::New4();
    temp_Value_inst = ::g::Haslaamispaivakirja_basicTextBoxFakeDropDown_Value_Property::New1(temp, textDropDown::__selector3_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(uString::Const("dropDownSelVal"));
    temp_DataKey_inst = ::g::Haslaamispaivakirja_basicTextBoxFakeDropDown_DataKey_Property::New1(temp, textDropDown::__selector5_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(uString::Const("dropDownSelKey"));
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(uString::Const("dropDownTrigger"));
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(uString::Const("closeDropDown"));
    ::g::Fuse::Reactive::Constant* temp7 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::Haslaamispaivakirja_FuseReactiveEach_Items_Property::New1(temp1, textDropDown::__selector6_);
    ::g::Fuse::Reactive::Property* temp8 = ::g::Fuse::Reactive::Property::New1(temp7, ::g::Haslaamispaivakirja_accessor_textDropDown_dropDownList::Singleton());
    DropDownShow = ::g::Fuse::Controls::StackPanel::New4();
    DropDownShow_Visibility_inst = ::g::Haslaamispaivakirja_FuseElementsElement_Visibility_Property::New1(DropDownShow, textDropDown::__selector7_);
    DropDownShow_Opacity_inst = ::g::Haslaamispaivakirja_FuseElementsElement_Opacity_Property::New1(DropDownShow, textDropDown::__selector8_);
    ::g::Fuse::Triggers::WhileTrue* temp2 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp2_Value_inst = ::g::Haslaamispaivakirja_FuseTriggersWhileBool_Value_Property::New1(temp2, textDropDown::__selector3_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(uString::Const("DropDownVisible"));
    ::g::Fuse::Reactive::JavaScript* temp10 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp11 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, 3);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(temp_DataKey_inst, (uObject*)temp4, 3);
    temp_eb21 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5);
    ::g::Fuse::Controls::Rectangle* temp14 = ::g::Fuse::Controls::Rectangle::New3();
    DropDownTheList = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp15 = ::g::Fuse::Controls::Rectangle::New3();
    closeDropDown = ::g::fa_times::New4();
    temp_eb22 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6);
    ::g::Fuse::Controls::Text* temp16 = ::g::Fuse::Controls::Text::New3();
    textDropDown__Template* temp17 = textDropDown__Template::New2(this, this);
    textDropDown__Template1* FakeBtn = textDropDown__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp8, 3);
    ::g::Fuse::Animations::Change* temp19 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), DropDownShow_Visibility_inst);
    ::g::Fuse::Animations::Change* temp20 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), DropDownShow_Opacity_inst);
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp9, 3);
    SourceLineNumber(1);
    SourceFileName(uString::Const("Components/textDropDown.ux"));
    temp10->Code(uString::Const("\n"
        "\t\tvar property_Value = this.Value.value;\n"
        "\t\tvar property_Name = this.Name.value;\n"
        "\n"
        "\t\tthis.SendName.value = property_Name;\n"
        "\n"
        "\t\tvar Observable = require(\"FuseJS/Observable\");\n"
        "\t\tvar DropDownVisible = Observable(false);\n"
        "\t\tvar selectThisOption = Observable();\n"
        "\t\tvar dropDownSelVal = Observable(property_Value);\n"
        "\t\tvar dropDownSelKey = Observable();\n"
        "\n"
        "\t\tfunction dropDownTrigger(){\n"
        "\t\t\tif(DropDownVisible.value){\n"
        "\t\t\t\tDropDownVisible.value = false;\n"
        "\t\t\t}else{\n"
        "\t\t\t\tDropDownVisible.value = true;\n"
        "\t\t\t}\n"
        "\t\t}\n"
        "\n"
        "\t\tfunction selectedFunc(a){\n"
        "\t\t\tconsole.dir('s',a.data);\n"
        "\t\t\tdropDownSelKey.value = a.data.key;\n"
        "\t\t\tdropDownSelVal.value = a.data.name;\n"
        "\n"
        "\t\t\tentrystr = a.data.name;\n"
        "\t\t\tentrystrSendName = property_Name;\n"
        "\t\t\t\n"
        "\t\t\tsetTimeout(function(){\n"
        "\t\t\t\tDropDownVisible.value = false;\n"
        "\t\t\t},1000);\n"
        "\t\t}\n"
        "\n"
        "\t\tfunction closeDropDown(){\n"
        "\t\t\tDropDownVisible.value = false;\n"
        "\t\t}\n"
        "\n"
        "\t\tmodule.exports = {\n"
        "\t\t\tDropDownVisible:DropDownVisible,\n"
        "\t\t\tdropDownTrigger:dropDownTrigger,\n"
        "\t\t\tdropDownSelVal:dropDownSelVal,\n"
        "\t\t\tdropDownSelKey:dropDownSelKey,\n"
        "\n"
        "\t\t\tselectedFunc:selectedFunc,\n"
        "\t\t\tselectThisOption:selectThisOption, //t\303\244m\303\244 ei oikeastaan ole tarpeellinen\n"
        "\t\t\tcloseDropDown:closeDropDown\n"
        "\t\t};\n"
        "\t"));
    temp10->LineNumber(8);
    temp10->FileName(uString::Const("Components/textDropDown.ux"));
    temp10->SourceLineNumber(8);
    temp10->SourceFileName(uString::Const("Components/textDropDown.ux"));
    temp11->SourceLineNumber(57);
    temp11->SourceFileName(uString::Const("Components/textDropDown.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), DropDownShow);
    temp->TextAlignment(uString::Const("Left"));
    temp->Alignment(0);
    temp->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp->SourceLineNumber(59);
    temp->SourceFileName(uString::Const("Components/textDropDown.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb21)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb21);
    temp3->SourceLineNumber(59);
    temp3->SourceFileName(uString::Const("Components/textDropDown.ux"));
    temp4->SourceLineNumber(59);
    temp4->SourceFileName(uString::Const("Components/textDropDown.ux"));
    temp5->SourceLineNumber(59);
    temp5->SourceFileName(uString::Const("Components/textDropDown.ux"));
    uPtr(DropDownShow)->Visibility(1);
    uPtr(DropDownShow)->Opacity(0.1f);
    uPtr(DropDownShow)->Name(textDropDown::__selector9_);
    uPtr(DropDownShow)->SourceLineNumber(63);
    uPtr(DropDownShow)->SourceFileName(uString::Const("Components/textDropDown.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(DropDownShow)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(DropDownShow)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), DropDownTheList);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(DropDownShow)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    temp14->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.2f));
    temp14->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp14->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp14->SourceLineNumber(65);
    temp14->SourceFileName(uString::Const("Components/textDropDown.ux"));
    uPtr(DropDownTheList)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.09803922f));
    uPtr(DropDownTheList)->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    uPtr(DropDownTheList)->Padding(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 10.0f));
    uPtr(DropDownTheList)->Opacity(1.0f);
    uPtr(DropDownTheList)->Name(textDropDown::__selector10_);
    uPtr(DropDownTheList)->SourceLineNumber(68);
    uPtr(DropDownTheList)->SourceFileName(uString::Const("Components/textDropDown.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(DropDownTheList)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(DropDownTheList)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    temp15->SourceLineNumber(69);
    temp15->SourceFileName(uString::Const("Components/textDropDown.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), closeDropDown);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp16);
    uPtr(closeDropDown)->FontSize(18.0f);
    uPtr(closeDropDown)->TextAlignment(1);
    uPtr(closeDropDown)->Color(::g::Fuse::Drawing::Colors::White());
    uPtr(closeDropDown)->HitTestMode(2);
    uPtr(closeDropDown)->Alignment(7);
    uPtr(closeDropDown)->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    uPtr(closeDropDown)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(closeDropDown)->Opacity(1.0f);
    uPtr(closeDropDown)->Name(textDropDown::__selector11_);
    uPtr(closeDropDown)->SourceLineNumber(70);
    uPtr(closeDropDown)->SourceFileName(uString::Const("Components/textDropDown.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(closeDropDown, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb22)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(closeDropDown)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb22);
    temp6->SourceLineNumber(70);
    temp6->SourceFileName(uString::Const("Components/textDropDown.ux"));
    temp16->Value(uString::Const("Valitse"));
    temp16->TextAlignment(1);
    temp16->Color(::g::Fuse::Drawing::Colors::White());
    temp16->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    temp16->SourceLineNumber(71);
    temp16->SourceFileName(uString::Const("Components/textDropDown.ux"));
    temp1->SourceLineNumber(76);
    temp1->SourceFileName(uString::Const("Components/textDropDown.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), FakeBtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp18);
    temp8->SourceLineNumber(76);
    temp8->SourceFileName(uString::Const("Components/textDropDown.ux"));
    temp7->SourceLineNumber(76);
    temp7->SourceFileName(uString::Const("Components/textDropDown.ux"));
    temp2->SourceLineNumber(89);
    temp2->SourceFileName(uString::Const("Components/textDropDown.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp21);
    ::g::Fuse::Animations::Change__set_Value_fn(temp19, uCRef<int32_t>(0));
    temp19->DelayBack(0.26);
    temp19->Delay(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp20, uCRef(1.0f));
    temp20->Duration(0.36);
    temp9->SourceLineNumber(89);
    temp9->SourceFileName(uString::Const("Components/textDropDown.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), DropDownShow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), DropDownTheList);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), closeDropDown);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_dropDownList_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_Send_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_SendName_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_Value_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)), this_Name_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
}

// public string get_Name() [instance] :68
uString* textDropDown::Name1()
{
    return _field_Name;
}

// public void set_Name(string value) [instance] :69
void textDropDown::Name1(uString* value)
{
    SetName(value, NULL);
}

// public string get_Send() [instance] :23
uString* textDropDown::Send()
{
    return _field_Send;
}

// public void set_Send(string value) [instance] :24
void textDropDown::Send(uString* value)
{
    SetSend(value, NULL);
}

// public string get_SendName() [instance] :38
uString* textDropDown::SendName()
{
    return _field_SendName;
}

// public void set_SendName(string value) [instance] :39
void textDropDown::SendName(uString* value)
{
    SetSendName(value, NULL);
}

// public void SetdropDownList(object value, Uno.UX.IPropertyListener origin) [instance] :11
void textDropDown::SetdropDownList(uObject* value, uObject* origin)
{
    if (value != _field_dropDownList)
    {
        _field_dropDownList = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(uString::Const("dropDownList")), origin);
    }
}

// public void SetName(string value, Uno.UX.IPropertyListener origin) [instance] :71
void textDropDown::SetName(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Name))
    {
        _field_Name = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(uString::Const("Name")), origin);
    }
}

// public void SetSend(string value, Uno.UX.IPropertyListener origin) [instance] :26
void textDropDown::SetSend(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Send))
    {
        _field_Send = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(uString::Const("Send")), origin);
    }
}

// public void SetSendName(string value, Uno.UX.IPropertyListener origin) [instance] :41
void textDropDown::SetSendName(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_SendName))
    {
        _field_SendName = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(uString::Const("SendName")), origin);
    }
}

// public void SetValue(string value, Uno.UX.IPropertyListener origin) [instance] :56
void textDropDown::SetValue(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Value))
    {
        _field_Value = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value")), origin);
    }
}

// public string get_Value() [instance] :53
uString* textDropDown::Value()
{
    return _field_Value;
}

// public void set_Value(string value) [instance] :54
void textDropDown::Value(uString* value)
{
    SetValue(value, NULL);
}

// public textDropDown New() [static] :220
textDropDown* textDropDown::New4()
{
    textDropDown* obj1 = (textDropDown*)uNew(textDropDown_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
