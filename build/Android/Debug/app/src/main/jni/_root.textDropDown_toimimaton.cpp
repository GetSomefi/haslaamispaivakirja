// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/textDropDown_toimimaton.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.textDropDown_toimimaton.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// public partial sealed class textDropDown_toimimaton :2
// {
// static textDropDown_toimimaton() :365
static void textDropDown_toimimaton__cctor_4_fn(uType* __type)
{
    textDropDown_toimimaton::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 3, uString::Const("mitateit_vihanhallinanmenetelma"), uString::Const("temp_eb25"), uString::Const("DropDownShow"));
    textDropDown_toimimaton::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("dropDownList"));
    textDropDown_toimimaton::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Send"));
    textDropDown_toimimaton::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value"));
    textDropDown_toimimaton::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    textDropDown_toimimaton::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Visibility"));
    textDropDown_toimimaton::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Opacity"));
    textDropDown_toimimaton::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("mitateit_vihanhallinanmenetelma"));
    textDropDown_toimimaton::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("DropDownShow"));
}

static void textDropDown_toimimaton_build(uType* type)
{
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
        uObject_typeof(), offsetof(textDropDown_toimimaton, _field_dropDownList), 0,
        ::g::Uno::String_typeof(), offsetof(textDropDown_toimimaton, _field_Send), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&textDropDown_toimimaton::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton::__selector7_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* textDropDown_toimimaton_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 126;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(textDropDown_toimimaton);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("textDropDown_toimimaton", options);
    type->fp_build_ = textDropDown_toimimaton_build;
    type->fp_cctor_ = textDropDown_toimimaton__cctor_4_fn;
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

// public object get_dropDownList() :8
void textDropDown_toimimaton__get_dropDownList_fn(textDropDown_toimimaton* __this, uObject** __retval)
{
    *__retval = __this->dropDownList();
}

// public void set_dropDownList(object value) :9
void textDropDown_toimimaton__set_dropDownList_fn(textDropDown_toimimaton* __this, uObject* value)
{
    __this->dropDownList(value);
}

// public string get_Send() :23
void textDropDown_toimimaton__get_Send_fn(textDropDown_toimimaton* __this, uString** __retval)
{
    *__retval = __this->Send();
}

// public void set_Send(string value) :24
void textDropDown_toimimaton__set_Send_fn(textDropDown_toimimaton* __this, uString* value)
{
    __this->Send(value);
}

// public void SetdropDownList(object value, Uno.UX.IPropertyListener origin) :11
void textDropDown_toimimaton__SetdropDownList_fn(textDropDown_toimimaton* __this, uObject* value, uObject* origin)
{
    __this->SetdropDownList(value, origin);
}

// public void SetSend(string value, Uno.UX.IPropertyListener origin) :26
void textDropDown_toimimaton__SetSend_fn(textDropDown_toimimaton* __this, uString* value, uObject* origin)
{
    __this->SetSend(value, origin);
}

uSStrong<uArray*> textDropDown_toimimaton::__g_static_nametable1_;
::g::Uno::UX::Selector textDropDown_toimimaton::__selector0_;
::g::Uno::UX::Selector textDropDown_toimimaton::__selector1_;
::g::Uno::UX::Selector textDropDown_toimimaton::__selector2_;
::g::Uno::UX::Selector textDropDown_toimimaton::__selector3_;
::g::Uno::UX::Selector textDropDown_toimimaton::__selector4_;
::g::Uno::UX::Selector textDropDown_toimimaton::__selector5_;
::g::Uno::UX::Selector textDropDown_toimimaton::__selector6_;
::g::Uno::UX::Selector textDropDown_toimimaton::__selector7_;

// public object get_dropDownList() [instance] :8
uObject* textDropDown_toimimaton::dropDownList()
{
    return _field_dropDownList;
}

// public void set_dropDownList(object value) [instance] :9
void textDropDown_toimimaton::dropDownList(uObject* value)
{
    SetdropDownList(value, NULL);
}

// public string get_Send() [instance] :23
uString* textDropDown_toimimaton::Send()
{
    return _field_Send;
}

// public void set_Send(string value) [instance] :24
void textDropDown_toimimaton::Send(uString* value)
{
    SetSend(value, NULL);
}

// public void SetdropDownList(object value, Uno.UX.IPropertyListener origin) [instance] :11
void textDropDown_toimimaton::SetdropDownList(uObject* value, uObject* origin)
{
    if (value != _field_dropDownList)
    {
        _field_dropDownList = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(uString::Const("dropDownList")), origin);
    }
}

// public void SetSend(string value, Uno.UX.IPropertyListener origin) [instance] :26
void textDropDown_toimimaton::SetSend(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Send))
    {
        _field_Send = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(uString::Const("Send")), origin);
    }
}
// }

} // ::g
