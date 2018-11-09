// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/BasicSwipeToggle.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BasicSwipeToggle.h>
#include <Uno.Bool.h>
#include <Uno.String.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[8];

namespace g{

// public partial sealed class BasicSwipeToggle :2
// {
// static BasicSwipeToggle() :75
static void BasicSwipeToggle__cctor_4_fn(uType* __type)
{
    BasicSwipeToggle::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"IsActive"*/]);
    BasicSwipeToggle::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Color"*/]);
    BasicSwipeToggle::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Value"*/]);
    BasicSwipeToggle::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"swipe"*/]);
    BasicSwipeToggle::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"handle"*/]);
    BasicSwipeToggle::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"background"*/]);
}

static void BasicSwipeToggle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("IsActive");
    ::STRINGS[1] = uString::Const("Color");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("swipe");
    ::STRINGS[4] = uString::Const("handle");
    ::STRINGS[5] = uString::Const("background");
    ::STRINGS[6] = uString::Const("PrimaryColor");
    ::STRINGS[7] = uString::Const("SecondaryColor");
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
        ::g::Uno::Float4_typeof(), offsetof(BasicSwipeToggle, _field_PrimaryColor), 0,
        ::g::Uno::Float4_typeof(), offsetof(BasicSwipeToggle, _field_SecondaryColor), 0,
        ::g::Uno::Bool_typeof(), offsetof(BasicSwipeToggle, _field_IsActive), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggle::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggle::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggle::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggle::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggle::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggle::__selector5_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* BasicSwipeToggle_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 124;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(BasicSwipeToggle);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("BasicSwipeToggle", options);
    type->fp_build_ = BasicSwipeToggle_build;
    type->fp_cctor_ = BasicSwipeToggle__cctor_4_fn;
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

// public bool get_IsActive() :53
void BasicSwipeToggle__get_IsActive_fn(BasicSwipeToggle* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :54
void BasicSwipeToggle__set_IsActive_fn(BasicSwipeToggle* __this, bool* value)
{
    __this->IsActive(*value);
}

// public float4 get_PrimaryColor() :8
void BasicSwipeToggle__get_PrimaryColor_fn(BasicSwipeToggle* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->PrimaryColor();
}

// public void set_PrimaryColor(float4 value) :9
void BasicSwipeToggle__set_PrimaryColor_fn(BasicSwipeToggle* __this, ::g::Uno::Float4* value)
{
    __this->PrimaryColor(*value);
}

// public float4 get_SecondaryColor() :23
void BasicSwipeToggle__get_SecondaryColor_fn(BasicSwipeToggle* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->SecondaryColor();
}

// public void set_SecondaryColor(float4 value) :24
void BasicSwipeToggle__set_SecondaryColor_fn(BasicSwipeToggle* __this, ::g::Uno::Float4* value)
{
    __this->SecondaryColor(*value);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) :56
void BasicSwipeToggle__SetIsActive_fn(BasicSwipeToggle* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// public void SetPrimaryColor(float4 value, Uno.UX.IPropertyListener origin) :11
void BasicSwipeToggle__SetPrimaryColor_fn(BasicSwipeToggle* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetPrimaryColor(*value, origin);
}

// public void SetSecondaryColor(float4 value, Uno.UX.IPropertyListener origin) :26
void BasicSwipeToggle__SetSecondaryColor_fn(BasicSwipeToggle* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetSecondaryColor(*value, origin);
}

::g::Uno::UX::Selector BasicSwipeToggle::__selector0_;
::g::Uno::UX::Selector BasicSwipeToggle::__selector1_;
::g::Uno::UX::Selector BasicSwipeToggle::__selector2_;
::g::Uno::UX::Selector BasicSwipeToggle::__selector3_;
::g::Uno::UX::Selector BasicSwipeToggle::__selector4_;
::g::Uno::UX::Selector BasicSwipeToggle::__selector5_;

// public bool get_IsActive() [instance] :53
bool BasicSwipeToggle::IsActive()
{
    return _field_IsActive;
}

// public void set_IsActive(bool value) [instance] :54
void BasicSwipeToggle::IsActive(bool value)
{
    SetIsActive(value, NULL);
}

// public float4 get_PrimaryColor() [instance] :8
::g::Uno::Float4 BasicSwipeToggle::PrimaryColor()
{
    return _field_PrimaryColor;
}

// public void set_PrimaryColor(float4 value) [instance] :9
void BasicSwipeToggle::PrimaryColor(::g::Uno::Float4 value)
{
    SetPrimaryColor(value, NULL);
}

// public float4 get_SecondaryColor() [instance] :23
::g::Uno::Float4 BasicSwipeToggle::SecondaryColor()
{
    return _field_SecondaryColor;
}

// public void set_SecondaryColor(float4 value) [instance] :24
void BasicSwipeToggle::SecondaryColor(::g::Uno::Float4 value)
{
    SetSecondaryColor(value, NULL);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) [instance] :56
void BasicSwipeToggle::SetIsActive(bool value, uObject* origin)
{
    if (value != _field_IsActive)
    {
        _field_IsActive = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"IsActive"*/]), origin);
    }
}

// public void SetPrimaryColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :11
void BasicSwipeToggle::SetPrimaryColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_PrimaryColor))
    {
        _field_PrimaryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"PrimaryColor"*/]), origin);
    }
}

// public void SetSecondaryColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :26
void BasicSwipeToggle::SetSecondaryColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_SecondaryColor))
    {
        _field_SecondaryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"SecondaryCo...*/]), origin);
    }
}
// }

} // ::g
