[Uno.Compiler.UxGenerated]
public partial class basicDropDown: Fuse.Controls.Panel
{
    object _field_dropDownList;
    [global::Uno.UX.UXOriginSetter("SetdropDownList")]
    public object dropDownList
    {
        get { return _field_dropDownList; }
        set { SetdropDownList(value, null); }
    }
    public void SetdropDownList(object value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_dropDownList)
        {
            _field_dropDownList = value;
            OnPropertyChanged("dropDownList", origin);
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly basicDropDown __parent;
        [Uno.WeakReference] internal readonly basicDropDown __parentInstance;
        public Template(basicDropDown parent, basicDropDown parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Selection.Selection();
            __self.SourceLineNumber = 29;
            __self.SourceFileName = "Components/basicDropDown.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly basicDropDown __parent;
        [Uno.WeakReference] internal readonly basicDropDown __parentInstance;
        public Template1(basicDropDown parent, basicDropDown parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.Property<string> __self_DataKey_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb20;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::listBtn.Button();
            var temp = new global::Fuse.Reactive.Data("selectThisOption");
            __self_Text_inst = new Haslaamispaivakirja_listBtnButton_Text_Property(__self, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("name");
            __self_DataKey_inst = new Haslaamispaivakirja_listBtnButton_DataKey_Property(__self, __selector1);
            var temp2 = new global::Fuse.Reactive.Data("key");
            temp_eb20 = new global::Fuse.Reactive.EventBinding(temp);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp4 = new global::Fuse.Reactive.DataBinding(__self_DataKey_inst, temp2, Fuse.Reactive.BindingMode.Default);
            __self.FontSize = 14f;
            __self.SourceLineNumber = 30;
            __self.SourceFileName = "Components/basicDropDown.ux";
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb20.OnEvent);
            temp.SourceLineNumber = 30;
            temp.SourceFileName = "Components/basicDropDown.ux";
            temp1.SourceLineNumber = 30;
            temp1.SourceFileName = "Components/basicDropDown.ux";
            temp2.SourceLineNumber = 30;
            temp2.SourceFileName = "Components/basicDropDown.ux";
            __self.Bindings.Add(temp_eb20);
            __self.Bindings.Add(temp3);
            __self.Bindings.Add(temp4);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Text";
        static global::Uno.UX.Selector __selector1 = "DataKey";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> DropDownShow_Visibility_inst;
    global::Uno.UX.Property<float> DropDownShow_Opacity_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    global::Uno.UX.Property<object> this_dropDownList_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb19;
    internal global::Fuse.Controls.StackPanel DropDownShow;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "temp_eb19",
        "DropDownShow"
    };
    static basicDropDown()
    {
    }
    [global::Uno.UX.UXConstructor]
    public basicDropDown()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_dropDownList_inst = new Haslaamispaivakirja_basicDropDown_dropDownList_Property(this, __selector0);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp2 = new global::Fuse.Reactive.Data("dropDownTrigger");
        var temp3 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new Haslaamispaivakirja_FuseReactiveEach_Items_Property(temp, __selector1);
        var temp4 = new global::Fuse.Reactive.Property(temp3, Haslaamispaivakirja_accessor_basicDropDown_dropDownList.Singleton);
        DropDownShow = new global::Fuse.Controls.StackPanel();
        DropDownShow_Visibility_inst = new Haslaamispaivakirja_FuseElementsElement_Visibility_Property(DropDownShow, __selector2);
        DropDownShow_Opacity_inst = new Haslaamispaivakirja_FuseElementsElement_Opacity_Property(DropDownShow, __selector3);
        var temp1 = new global::Fuse.Triggers.WhileTrue();
        temp1_Value_inst = new Haslaamispaivakirja_FuseTriggersWhileBool_Value_Property(temp1, __selector4);
        var temp5 = new global::Fuse.Reactive.Data("DropDownVisible");
        var temp6 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp7 = new global::Fuse.Controls.StackPanel();
        var temp8 = new global::basicBtn.Button();
        temp_eb19 = new global::Fuse.Reactive.EventBinding(temp2);
        var temp9 = new global::Fuse.Controls.StackPanel();
        var temp10 = new global::generaltext.Text();
        var temp11 = new Template(this, this);
        var temp12 = new Template1(this, this);
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp14 = new global::Fuse.Animations.Change<Fuse.Elements.Visibility>(DropDownShow_Visibility_inst);
        var temp15 = new global::Fuse.Animations.Change<float>(DropDownShow_Opacity_inst);
        var temp16 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/basicDropDown.ux";
        temp6.Code = "\n\t\tvar Observable = require(\"FuseJS/Observable\");\n\t\tvar DropDownVisible = Observable(false);\n\n\t\tfunction dropDownTrigger(){\n\t\t\tconsole.log('klikki'); \n\t\t\tif(DropDownVisible.value){\n\t\t\t\tDropDownVisible.value = false;\n\t\t\t}else{\n\t\t\t\tDropDownVisible.value = true;\n\t\t\t}\n\t\t}\n\n\t\tmodule.exports = {\n\t\t\tDropDownVisible:DropDownVisible,\n\t\t\tdropDownTrigger:dropDownTrigger\n\t\t};\n\t";
        temp6.LineNumber = 4;
        temp6.FileName = "Components/basicDropDown.ux";
        temp6.SourceLineNumber = 4;
        temp6.SourceFileName = "Components/basicDropDown.ux";
        temp7.SourceLineNumber = 23;
        temp7.SourceFileName = "Components/basicDropDown.ux";
        temp7.Children.Add(temp8);
        temp7.Children.Add(DropDownShow);
        temp8.Text = "Valitse";
        temp8.BgColor = "#125F63";
        temp8.Margin = float4(0f, 0f, 0f, 0f);
        temp8.SourceLineNumber = 24;
        temp8.SourceFileName = "Components/basicDropDown.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp8, temp_eb19.OnEvent);
        temp8.Bindings.Add(temp_eb19);
        temp2.SourceLineNumber = 24;
        temp2.SourceFileName = "Components/basicDropDown.ux";
        DropDownShow.Visibility = Fuse.Elements.Visibility.Collapsed;
        DropDownShow.Opacity = 0.1f;
        DropDownShow.Name = __selector5;
        DropDownShow.SourceLineNumber = 25;
        DropDownShow.SourceFileName = "Components/basicDropDown.ux";
        DropDownShow.Children.Add(temp9);
        DropDownShow.Children.Add(temp1);
        temp9.SourceLineNumber = 26;
        temp9.SourceFileName = "Components/basicDropDown.ux";
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp);
        temp10.Value = "Valitse";
        temp10.SourceLineNumber = 27;
        temp10.SourceFileName = "Components/basicDropDown.ux";
        temp.SourceLineNumber = 28;
        temp.SourceFileName = "Components/basicDropDown.ux";
        temp.Templates.Add(temp11);
        temp.Templates.Add(temp12);
        temp.Bindings.Add(temp13);
        temp4.SourceLineNumber = 28;
        temp4.SourceFileName = "Components/basicDropDown.ux";
        temp3.SourceLineNumber = 28;
        temp3.SourceFileName = "Components/basicDropDown.ux";
        temp1.SourceLineNumber = 34;
        temp1.SourceFileName = "Components/basicDropDown.ux";
        temp1.Animators.Add(temp14);
        temp1.Animators.Add(temp15);
        temp1.Bindings.Add(temp16);
        temp14.Value = Fuse.Elements.Visibility.Visible;
        temp14.DelayBack = 0.26;
        temp14.Delay = 0;
        temp15.Value = 1f;
        temp15.Duration = 0.36;
        temp5.SourceLineNumber = 34;
        temp5.SourceFileName = "Components/basicDropDown.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(temp_eb19);
        __g_nametable.Objects.Add(DropDownShow);
        __g_nametable.Properties.Add(this_dropDownList_inst);
        this.Children.Add(temp6);
        this.Children.Add(temp7);
    }
    static global::Uno.UX.Selector __selector0 = "dropDownList";
    static global::Uno.UX.Selector __selector1 = "Items";
    static global::Uno.UX.Selector __selector2 = "Visibility";
    static global::Uno.UX.Selector __selector3 = "Opacity";
    static global::Uno.UX.Selector __selector4 = "Value";
    static global::Uno.UX.Selector __selector5 = "DropDownShow";
}
