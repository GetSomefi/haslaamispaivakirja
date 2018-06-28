// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/BasicSwipeToggleBigTest.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BasicSwipeToggleBigTest.h>
#include <Uno.Bool.h>
#include <Uno.String.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[9];

namespace g{

// public partial sealed class BasicSwipeToggleBigTest :2
// {
// static BasicSwipeToggleBigTest() :91
static void BasicSwipeToggleBigTest__cctor_4_fn(uType* __type)
{
    BasicSwipeToggleBigTest::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"IsActive"*/]);
    BasicSwipeToggleBigTest::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Color"*/]);
    BasicSwipeToggleBigTest::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Value"*/]);
    BasicSwipeToggleBigTest::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Sendable"*/]);
    BasicSwipeToggleBigTest::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"swipe"*/]);
    BasicSwipeToggleBigTest::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"handle"*/]);
    BasicSwipeToggleBigTest::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"background"*/]);
}

static void BasicSwipeToggleBigTest_build(uType* type)
{
    ::STRINGS[0] = uString::Const("IsActive");
    ::STRINGS[1] = uString::Const("Color");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("Sendable");
    ::STRINGS[4] = uString::Const("swipe");
    ::STRINGS[5] = uString::Const("handle");
    ::STRINGS[6] = uString::Const("background");
    ::STRINGS[7] = uString::Const("PrimaryColor");
    ::STRINGS[8] = uString::Const("SecondaryColor");
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
        ::g::Uno::Bool_typeof(), offsetof(BasicSwipeToggleBigTest, _field_Sendable), 0,
        ::g::Uno::Float4_typeof(), offsetof(BasicSwipeToggleBigTest, _field_PrimaryColor), 0,
        ::g::Uno::Float4_typeof(), offsetof(BasicSwipeToggleBigTest, _field_SecondaryColor), 0,
        ::g::Uno::Bool_typeof(), offsetof(BasicSwipeToggleBigTest, _field_IsActive), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggleBigTest::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggleBigTest::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggleBigTest::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggleBigTest::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggleBigTest::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggleBigTest::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggleBigTest::__selector6_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* BasicSwipeToggleBigTest_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 126;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(BasicSwipeToggleBigTest);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("BasicSwipeToggleBigTest", options);
    type->fp_build_ = BasicSwipeToggleBigTest_build;
    type->fp_cctor_ = BasicSwipeToggleBigTest__cctor_4_fn;
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

// public bool get_IsActive() :68
void BasicSwipeToggleBigTest__get_IsActive_fn(BasicSwipeToggleBigTest* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :69
void BasicSwipeToggleBigTest__set_IsActive_fn(BasicSwipeToggleBigTest* __this, bool* value)
{
    __this->IsActive(*value);
}

// public float4 get_PrimaryColor() :23
void BasicSwipeToggleBigTest__get_PrimaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->PrimaryColor();
}

// public void set_PrimaryColor(float4 value) :24
void BasicSwipeToggleBigTest__set_PrimaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* value)
{
    __this->PrimaryColor(*value);
}

// public float4 get_SecondaryColor() :38
void BasicSwipeToggleBigTest__get_SecondaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->SecondaryColor();
}

// public void set_SecondaryColor(float4 value) :39
void BasicSwipeToggleBigTest__set_SecondaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* value)
{
    __this->SecondaryColor(*value);
}

// public bool get_Sendable() :8
void BasicSwipeToggleBigTest__get_Sendable_fn(BasicSwipeToggleBigTest* __this, bool* __retval)
{
    *__retval = __this->Sendable();
}

// public void set_Sendable(bool value) :9
void BasicSwipeToggleBigTest__set_Sendable_fn(BasicSwipeToggleBigTest* __this, bool* value)
{
    __this->Sendable(*value);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) :71
void BasicSwipeToggleBigTest__SetIsActive_fn(BasicSwipeToggleBigTest* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// public void SetPrimaryColor(float4 value, Uno.UX.IPropertyListener origin) :26
void BasicSwipeToggleBigTest__SetPrimaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetPrimaryColor(*value, origin);
}

// public void SetSecondaryColor(float4 value, Uno.UX.IPropertyListener origin) :41
void BasicSwipeToggleBigTest__SetSecondaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetSecondaryColor(*value, origin);
}

// public void SetSendable(bool value, Uno.UX.IPropertyListener origin) :11
void BasicSwipeToggleBigTest__SetSendable_fn(BasicSwipeToggleBigTest* __this, bool* value, uObject* origin)
{
    __this->SetSendable(*value, origin);
}

::g::Uno::UX::Selector BasicSwipeToggleBigTest::__selector0_;
::g::Uno::UX::Selector BasicSwipeToggleBigTest::__selector1_;
::g::Uno::UX::Selector BasicSwipeToggleBigTest::__selector2_;
::g::Uno::UX::Selector BasicSwipeToggleBigTest::__selector3_;
::g::Uno::UX::Selector BasicSwipeToggleBigTest::__selector4_;
::g::Uno::UX::Selector BasicSwipeToggleBigTest::__selector5_;
::g::Uno::UX::Selector BasicSwipeToggleBigTest::__selector6_;

// public bool get_IsActive() [instance] :68
bool BasicSwipeToggleBigTest::IsActive()
{
    return _field_IsActive;
}

// public void set_IsActive(bool value) [instance] :69
void BasicSwipeToggleBigTest::IsActive(bool value)
{
    SetIsActive(value, NULL);
}

// public float4 get_PrimaryColor() [instance] :23
::g::Uno::Float4 BasicSwipeToggleBigTest::PrimaryColor()
{
    return _field_PrimaryColor;
}

// public void set_PrimaryColor(float4 value) [instance] :24
void BasicSwipeToggleBigTest::PrimaryColor(::g::Uno::Float4 value)
{
    SetPrimaryColor(value, NULL);
}

// public float4 get_SecondaryColor() [instance] :38
::g::Uno::Float4 BasicSwipeToggleBigTest::SecondaryColor()
{
    return _field_SecondaryColor;
}

// public void set_SecondaryColor(float4 value) [instance] :39
void BasicSwipeToggleBigTest::SecondaryColor(::g::Uno::Float4 value)
{
    SetSecondaryColor(value, NULL);
}

// public bool get_Sendable() [instance] :8
bool BasicSwipeToggleBigTest::Sendable()
{
    return _field_Sendable;
}

// public void set_Sendable(bool value) [instance] :9
void BasicSwipeToggleBigTest::Sendable(bool value)
{
    SetSendable(value, NULL);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) [instance] :71
void BasicSwipeToggleBigTest::SetIsActive(bool value, uObject* origin)
{
    if (value != _field_IsActive)
    {
        _field_IsActive = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"IsActive"*/]), origin);
    }
}

// public void SetPrimaryColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :26
void BasicSwipeToggleBigTest::SetPrimaryColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_PrimaryColor))
    {
        _field_PrimaryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"PrimaryColor"*/]), origin);
    }
}

// public void SetSecondaryColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :41
void BasicSwipeToggleBigTest::SetSecondaryColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_SecondaryColor))
    {
        _field_SecondaryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"SecondaryCo...*/]), origin);
    }
}

// public void SetSendable(bool value, Uno.UX.IPropertyListener origin) [instance] :11
void BasicSwipeToggleBigTest::SetSendable(bool value, uObject* origin)
{
    if (value != _field_Sendable)
    {
        _field_Sendable = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Sendable"*/]), origin);
    }
}
// }

} // ::g
