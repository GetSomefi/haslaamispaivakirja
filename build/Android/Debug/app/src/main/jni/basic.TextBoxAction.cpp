// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/basic.TextBoxAction.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-62c549aa.h>
#include <_root.Haslaamispaivak-90ae0140.h>
#include <_root.Haslaamispaivak-b2b137e5.h>
#include <basic.TextBoxAction.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.TextInp-cfb86f57.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-d8fdd070.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.TextInp-5cd41058.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileNotFocused.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[7];
static uType* TYPES[5];

namespace g{
namespace basic{

// public partial sealed class TextBoxAction :4
// {
// static TextBoxAction() :43
static void TextBoxAction__cctor_3_fn(uType* __type)
{
    TextBoxAction::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Send"*/]);
    TextBoxAction::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Value"*/]);
}

static void TextBoxAction_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Send");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("isOnInput");
    ::STRINGS[3] = uString::Const("entrystr");
    ::STRINGS[4] = uString::Const("Components/basic.TextBoxAction.ux");
    ::STRINGS[5] = uString::Const("Typed and Enter!");
    ::STRINGS[6] = uString::Const("Lost Focus!");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Haslaamispaivakirja_accessor_Fuse_Controls_TextInputControl_Value_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInput_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface4),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::TextInput_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInput_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInput_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInput_type, interface10),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::TextInput_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInput_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface17),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInput_type, interface18),
        ::g::Fuse::Controls::ITextEditControl_typeof(), offsetof(::g::Fuse::Controls::TextInput_type, interface19));
    type->SetFields(110,
        ::g::Uno::String_typeof(), offsetof(TextBoxAction, _field_Send), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(TextBoxAction, this_Send_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(TextBoxAction, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(TextBoxAction, temp1_Value_inst), 0,
        ::g::Fuse::Triggers::Actions::Callback_typeof(), offsetof(TextBoxAction, TheEnter), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(TextBoxAction, temp_eb17), 0,
        ::g::Fuse::Triggers::Actions::Callback_typeof(), offsetof(TextBoxAction, TheNoFocus), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(TextBoxAction, temp_eb18), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&TextBoxAction::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&TextBoxAction::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::TextInput_type* TextBoxAction_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::TextInput_typeof();
    options.FieldCount = 120;
    options.InterfaceCount = 20;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TextBoxAction);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextInput_type);
    type = (::g::Fuse::Controls::TextInput_type*)uClassType::New("basic.TextBoxAction", options);
    type->fp_build_ = TextBoxAction_build;
    type->fp_ctor_ = (void*)TextBoxAction__New4_fn;
    type->fp_cctor_ = TextBoxAction__cctor_3_fn;
    type->interface19.fp_add_ActionTriggered = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextInput__add_ActionTriggered_fn;
    type->interface19.fp_remove_ActionTriggered = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextInput__remove_ActionTriggered_fn;
    type->interface18.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextInputControl__get_Value_fn;
    type->interface18.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextInputControl__set_Value_fn;
    type->interface18.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextInputControl__add_ValueChanged_fn;
    type->interface18.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextInputControl__remove_ValueChanged_fn;
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
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::TextInputControl__OnPropertyChanged2_fn;
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

// public TextBoxAction() :47
void TextBoxAction__ctor_8_fn(TextBoxAction* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :51
void TextBoxAction__InitializeUX_fn(TextBoxAction* __this)
{
    __this->InitializeUX();
}

// public TextBoxAction New() :47
void TextBoxAction__New4_fn(TextBoxAction** __retval)
{
    *__retval = TextBoxAction::New4();
}

// public string get_Send() :10
void TextBoxAction__get_Send_fn(TextBoxAction* __this, uString** __retval)
{
    *__retval = __this->Send();
}

// public void set_Send(string value) :11
void TextBoxAction__set_Send_fn(TextBoxAction* __this, uString* value)
{
    __this->Send(value);
}

// public void SetSend(string value, Uno.UX.IPropertyListener origin) :13
void TextBoxAction__SetSend_fn(TextBoxAction* __this, uString* value, uObject* origin)
{
    __this->SetSend(value, origin);
}

::g::Uno::UX::Selector TextBoxAction::__selector0_;
::g::Uno::UX::Selector TextBoxAction::__selector1_;

// public TextBoxAction() [instance] :47
void TextBoxAction::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :51
void TextBoxAction::InitializeUX()
{
    this_Send_inst = ::g::Haslaamispaivakirja_basicTextBoxAction_Send_Property::New1(this, TextBoxAction::__selector0_);
    ::g::Fuse::Reactive::Constant* temp2 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Triggers::Actions::Set* temp = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<string>*/], this_Send_inst);
    temp_Value_inst = ::g::Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property::New1(temp, TextBoxAction::__selector1_);
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::Haslaamispaivakirja_accessor_Fuse_Controls_TextInputControl_Value::Singleton());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"isOnInput"*/]);
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Triggers::Actions::Set* temp1 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<string>*/], this_Send_inst);
    temp1_Value_inst = ::g::Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property::New1(temp1, TextBoxAction::__selector1_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::Haslaamispaivakirja_accessor_Fuse_Controls_TextInputControl_Value::Singleton());
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"isOnInput"*/]);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"entrystr"*/]);
    ::g::Fuse::Drawing::SolidColor* temp9 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Triggers::TextInputActionTriggered* temp10 = ::g::Fuse::Triggers::TextInputActionTriggered::New2();
    ::g::Fuse::Triggers::Actions::DebugAction* temp11 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    TheEnter = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, 3);
    temp_eb17 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::Fuse::Triggers::WhileNotFocused* temp13 = ::g::Fuse::Triggers::WhileNotFocused::New2();
    ::g::Fuse::Triggers::Actions::DebugAction* temp14 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    TheNoFocus = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp6, 3);
    temp_eb18 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7);
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(this_Send_inst, (uObject*)temp8, 3);
    ActionStyle(3);
    TextColor(::g::Fuse::Drawing::Colors::White());
    CaretColor(::g::Fuse::Drawing::Colors::White());
    Padding(::g::Uno::Float4__New2(10.0f, 10.0f, 0.0f, 10.0f));
    SourceLineNumber(10);
    SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp9->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.09803922f));
    temp10->SourceLineNumber(15);
    temp10->SourceFileName(::STRINGS[4/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), TheEnter);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb17);
    temp11->Message(::STRINGS[5/*"Typed and E...*/]);
    temp11->SourceLineNumber(16);
    temp11->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp->SourceLineNumber(17);
    temp->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp3->SourceLineNumber(17);
    temp3->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp2->SourceLineNumber(17);
    temp2->SourceFileName(::STRINGS[4/*"Components/...*/]);
    uPtr(TheEnter)->SourceLineNumber(18);
    uPtr(TheEnter)->SourceFileName(::STRINGS[4/*"Components/...*/]);
    uPtr(TheEnter)->add_Handler(uDelegate::New(::TYPES[3/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb17)));
    temp4->SourceLineNumber(18);
    temp4->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp13->SourceLineNumber(22);
    temp13->SourceFileName(::STRINGS[4/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), TheNoFocus);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb18);
    temp14->Message(::STRINGS[6/*"Lost Focus!"*/]);
    temp14->SourceLineNumber(23);
    temp14->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp1->SourceLineNumber(24);
    temp1->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp6->SourceLineNumber(24);
    temp6->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp5->SourceLineNumber(24);
    temp5->SourceFileName(::STRINGS[4/*"Components/...*/]);
    uPtr(TheNoFocus)->SourceLineNumber(25);
    uPtr(TheNoFocus)->SourceFileName(::STRINGS[4/*"Components/...*/]);
    uPtr(TheNoFocus)->add_Handler(uDelegate::New(::TYPES[3/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb18)));
    temp7->SourceLineNumber(25);
    temp7->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp8->SourceLineNumber(10);
    temp8->SourceFileName(::STRINGS[4/*"Components/...*/]);
    Background(temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
}

// public string get_Send() [instance] :10
uString* TextBoxAction::Send()
{
    return _field_Send;
}

// public void set_Send(string value) [instance] :11
void TextBoxAction::Send(uString* value)
{
    SetSend(value, NULL);
}

// public void SetSend(string value, Uno.UX.IPropertyListener origin) [instance] :13
void TextBoxAction::SetSend(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Send))
    {
        _field_Send = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Send"*/]), origin);
    }
}

// public TextBoxAction New() [static] :47
TextBoxAction* TextBoxAction::New4()
{
    TextBoxAction* obj1 = (TextBoxAction*)uNew(TextBoxAction_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}} // ::g::basic
