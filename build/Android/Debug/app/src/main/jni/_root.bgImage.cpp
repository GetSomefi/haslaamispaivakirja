// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/bgImage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.bgImage.h>
#include <_root.Haslaamispaivak-265a52be.h>
#include <_root.Haslaamispaivak-2942b810.h>
#include <_root.Haslaamispaivak-3e53ad4a.h>
#include <_root.Haslaamispaivak-80d86910.h>
#include <_root.Haslaamispaivak-a8299899.h>
#include <_root.Haslaamispaivak-d8ea7e4a.h>
#include <_root.Haslaamispaivak-e4a6c648.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[5];
static uType* TYPES[2];

namespace g{

// public partial sealed class bgImage :2
// {
// static bgImage() :52
static void bgImage__cctor_4_fn(uType* __type)
{
    bgImage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"File"*/]);
    bgImage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"StretchMode"*/]);
    bgImage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Background"*/]);
}

static void bgImage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("File");
    ::STRINGS[1] = uString::Const("StretchMode");
    ::STRINGS[2] = uString::Const("Background");
    ::STRINGS[3] = uString::Const("UniformToFill");
    ::STRINGS[4] = uString::Const("Components/bgImage.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Haslaamispaivakirja_accessor_bgImage_Background_typeof(),
        ::g::Haslaamispaivakirja_accessor_bgImage_File_typeof(),
        ::g::Haslaamispaivakirja_accessor_bgImage_StretchMode_typeof(),
        ::g::Haslaamispaivakirja_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(115,
        ::g::Uno::UX::FileSource_typeof(), offsetof(bgImage, _field_File), 0,
        ::g::Uno::String_typeof(), offsetof(bgImage, _field_StretchMode), 0,
        ::g::Uno::Float4_typeof(), offsetof(bgImage, _field_Background), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(bgImage, temp_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::StretchMode_typeof(), NULL), offsetof(bgImage, temp_StretchMode_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(bgImage, temp_Background_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&bgImage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&bgImage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&bgImage::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* bgImage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 124;
    options.InterfaceCount = 19;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(bgImage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("bgImage", options);
    type->fp_build_ = bgImage_build;
    type->fp_ctor_ = (void*)bgImage__New4_fn;
    type->fp_cctor_ = bgImage__cctor_4_fn;
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

// public bgImage() :56
void bgImage__ctor_7_fn(bgImage* __this)
{
    __this->ctor_7();
}

// public float4 get_Background() :38
void bgImage__get_Background1_fn(bgImage* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Background1();
}

// public void set_Background(float4 value) :39
void bgImage__set_Background1_fn(bgImage* __this, ::g::Uno::Float4* value)
{
    __this->Background1(*value);
}

// public Uno.UX.FileSource get_File() :8
void bgImage__get_File_fn(bgImage* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :9
void bgImage__set_File_fn(bgImage* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// private void InitializeUX() :60
void bgImage__InitializeUX_fn(bgImage* __this)
{
    __this->InitializeUX();
}

// public bgImage New() :56
void bgImage__New4_fn(bgImage** __retval)
{
    *__retval = bgImage::New4();
}

// public void SetBackground(float4 value, Uno.UX.IPropertyListener origin) :41
void bgImage__SetBackground1_fn(bgImage* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetBackground1(*value, origin);
}

// public void SetFile(Uno.UX.FileSource value, Uno.UX.IPropertyListener origin) :11
void bgImage__SetFile_fn(bgImage* __this, ::g::Uno::UX::FileSource* value, uObject* origin)
{
    __this->SetFile(value, origin);
}

// public void SetStretchMode(string value, Uno.UX.IPropertyListener origin) :26
void bgImage__SetStretchMode_fn(bgImage* __this, uString* value, uObject* origin)
{
    __this->SetStretchMode(value, origin);
}

// public string get_StretchMode() :23
void bgImage__get_StretchMode_fn(bgImage* __this, uString** __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(string value) :24
void bgImage__set_StretchMode_fn(bgImage* __this, uString* value)
{
    __this->StretchMode(value);
}

::g::Uno::UX::Selector bgImage::__selector0_;
::g::Uno::UX::Selector bgImage::__selector1_;
::g::Uno::UX::Selector bgImage::__selector2_;

// public bgImage() [instance] :56
void bgImage::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// public float4 get_Background() [instance] :38
::g::Uno::Float4 bgImage::Background1()
{
    return _field_Background;
}

// public void set_Background(float4 value) [instance] :39
void bgImage::Background1(::g::Uno::Float4 value)
{
    SetBackground1(value, NULL);
}

// public Uno.UX.FileSource get_File() [instance] :8
::g::Uno::UX::FileSource* bgImage::File()
{
    return _field_File;
}

// public void set_File(Uno.UX.FileSource value) [instance] :9
void bgImage::File(::g::Uno::UX::FileSource* value)
{
    SetFile(value, NULL);
}

// private void InitializeUX() [instance] :60
void bgImage::InitializeUX()
{
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    temp_File_inst = ::g::Haslaamispaivakirja_FuseControlsImage_File_Property::New1(temp, bgImage::__selector0_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::Haslaamispaivakirja_accessor_bgImage_File::Singleton());
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_StretchMode_inst = ::g::Haslaamispaivakirja_FuseControlsImage_StretchMode_Property::New1(temp, bgImage::__selector1_);
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::Haslaamispaivakirja_accessor_bgImage_StretchMode::Singleton());
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_Background_inst = ::g::Haslaamispaivakirja_FuseControlsControl_Background_Property::New1(temp, bgImage::__selector2_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::Haslaamispaivakirja_accessor_bgImage_Background::Singleton());
    ::g::Fuse::Controls::StackPanel* temp7 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp8 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5490196f, 0.5372549f, 0.6901961f, 0.6980392f));
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(temp_File_inst, (uObject*)temp2, 1);
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(temp_StretchMode_inst, (uObject*)temp4, 1);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(temp_Background_inst, (uObject*)temp6, 1);
    StretchMode(::STRINGS[3/*"UniformToFill"*/]);
    Background1(::g::Uno::Float4__New2(1.0f, 1.0f, 0.1333333f, 1.0f));
    Layer(1);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp7->SourceLineNumber(6);
    temp7->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp7->Background(temp8);
    temp->SourceLineNumber(7);
    temp->SourceFileName(::STRINGS[4/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp2->SourceLineNumber(7);
    temp2->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp1->SourceLineNumber(7);
    temp1->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp4->SourceLineNumber(7);
    temp4->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp3->SourceLineNumber(7);
    temp3->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp6->SourceLineNumber(7);
    temp6->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp5->SourceLineNumber(7);
    temp5->SourceFileName(::STRINGS[4/*"Components/...*/]);
    File(::g::Uno::UX::BundleFileSource::New1(::g::Haslaamispaivakirja_bundle::vuoristomaisema84f6fc28()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
}

// public void SetBackground(float4 value, Uno.UX.IPropertyListener origin) [instance] :41
void bgImage::SetBackground1(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_Background))
    {
        _field_Background = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Background"*/]), origin);
    }
}

// public void SetFile(Uno.UX.FileSource value, Uno.UX.IPropertyListener origin) [instance] :11
void bgImage::SetFile(::g::Uno::UX::FileSource* value, uObject* origin)
{
    if (value != _field_File)
    {
        _field_File = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"File"*/]), origin);
    }
}

// public void SetStretchMode(string value, Uno.UX.IPropertyListener origin) [instance] :26
void bgImage::SetStretchMode(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_StretchMode))
    {
        _field_StretchMode = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"StretchMode"*/]), origin);
    }
}

// public string get_StretchMode() [instance] :23
uString* bgImage::StretchMode()
{
    return _field_StretchMode;
}

// public void set_StretchMode(string value) [instance] :24
void bgImage::StretchMode(uString* value)
{
    SetStretchMode(value, NULL);
}

// public bgImage New() [static] :56
bgImage* bgImage::New4()
{
    bgImage* obj1 = (bgImage*)uNew(bgImage_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
