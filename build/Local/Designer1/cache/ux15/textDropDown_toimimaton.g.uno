[Uno.Compiler.UxGenerated]
public partial class textDropDown_toimimaton: Fuse.Controls.Panel
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
    string _field_Send;
    [global::Uno.UX.UXOriginSetter("SetSend")]
    public string Send
    {
        get { return _field_Send; }
        set { SetSend(value, null); }
    }
    public void SetSend(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Send)
        {
            _field_Send = value;
            OnPropertyChanged("Send", origin);
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly textDropDown_toimimaton __parent;
        [Uno.WeakReference] internal readonly textDropDown_toimimaton __parentInstance;
        public Template(textDropDown_toimimaton parent, textDropDown_toimimaton parentInstance): base(null, false)
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
            __self.SourceLineNumber = 40;
            __self.SourceFileName = "Components/textDropDown_toimimaton.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class listBtnCode: Fuse.Controls.Panel
    {
        string _field_Text;
        [global::Uno.UX.UXOriginSetter("SetText")]
        public string Text
        {
            get { return _field_Text; }
            set { SetText(value, null); }
        }
        public void SetText(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Text)
            {
                _field_Text = value;
                OnPropertyChanged("Text", origin);
            }
        }
        string _field_DataKey;
        [global::Uno.UX.UXOriginSetter("SetDataKey")]
        public string DataKey
        {
            get { return _field_DataKey; }
            set { SetDataKey(value, null); }
        }
        public void SetDataKey(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_DataKey)
            {
                _field_DataKey = value;
                OnPropertyChanged("DataKey", origin);
            }
        }
        string _field_BgColor;
        [global::Uno.UX.UXOriginSetter("SetBgColor")]
        public string BgColor
        {
            get { return _field_BgColor; }
            set { SetBgColor(value, null); }
        }
        public void SetBgColor(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_BgColor)
            {
                _field_BgColor = value;
                OnPropertyChanged("BgColor", origin);
            }
        }
        string _field_SelectedBgColor;
        [global::Uno.UX.UXOriginSetter("SetSelectedBgColor")]
        public string SelectedBgColor
        {
            get { return _field_SelectedBgColor; }
            set { SetSelectedBgColor(value, null); }
        }
        public void SetSelectedBgColor(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_SelectedBgColor)
            {
                _field_SelectedBgColor = value;
                OnPropertyChanged("SelectedBgColor", origin);
            }
        }
        float _field_FontSize;
        [global::Uno.UX.UXOriginSetter("SetFontSize")]
        public float FontSize
        {
            get { return _field_FontSize; }
            set { SetFontSize(value, null); }
        }
        public void SetFontSize(float value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_FontSize)
            {
                _field_FontSize = value;
                OnPropertyChanged("FontSize", origin);
            }
        }
        global::Uno.UX.Property<float4> btnBackground_Color_inst;
        global::Uno.UX.Property<float> btnText_FontSize_inst;
        global::Uno.UX.Property<string> btnText_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<float4> btnText_Color_inst;
        global::Uno.UX.Property<string> mitateit_vihanhallinanmenetelma_Value_inst;
        global::Uno.UX.Property<float4> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        global::Uno.UX.Property<string> this_Text_inst;
        global::Uno.UX.Property<string> this_DataKey_inst;
        global::Uno.UX.Property<string> this_BgColor_inst;
        global::Uno.UX.Property<string> this_SelectedBgColor_inst;
        global::Uno.UX.Property<float> this_FontSize_inst;
        internal global::Fuse.Controls.Rectangle btnBackground;
        internal global::generaltext.Text btnText;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "btnBackground",
            "btnText"
        };
        static listBtnCode()
        {
        }
        [Uno.WeakReference] internal readonly textDropDown_toimimaton __parent;
        public listBtnCode(textDropDown_toimimaton parent)
        {
            __parent = parent;
            InitializeUX();
        }
        void InitializeUX()
        {
            this_Text_inst = new Haslaamispaivakirja_textDropDown_toimimatonlistBtnCode_Text_Property(this, __selector0);
            this_DataKey_inst = new Haslaamispaivakirja_textDropDown_toimimatonlistBtnCode_DataKey_Property(this, __selector1);
            this_BgColor_inst = new Haslaamispaivakirja_textDropDown_toimimatonlistBtnCode_BgColor_Property(this, __selector2);
            this_SelectedBgColor_inst = new Haslaamispaivakirja_textDropDown_toimimatonlistBtnCode_SelectedBgColor_Property(this, __selector3);
            this_FontSize_inst = new Haslaamispaivakirja_textDropDown_toimimatonlistBtnCode_FontSize_Property(this, __selector4);
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp3 = new global::Fuse.Reactive.Constant(this);
            btnBackground = new global::Fuse.Controls.Rectangle();
            btnBackground_Color_inst = new Haslaamispaivakirja_FuseControlsShape_Color_Property(btnBackground, __selector5);
            var temp4 = new global::Fuse.Reactive.Property(temp3, Haslaamispaivakirja_accessor_listBtnCode_BgColor.Singleton);
            var temp5 = new global::Fuse.Reactive.Constant(this);
            btnText = new global::generaltext.Text();
            btnText_FontSize_inst = new Haslaamispaivakirja_FuseControlsTextControl_FontSize_Property(btnText, __selector4);
            var temp6 = new global::Fuse.Reactive.Property(temp5, Haslaamispaivakirja_accessor_listBtnCode_FontSize.Singleton);
            var temp7 = new global::Fuse.Reactive.Constant(this);
            btnText_Value_inst = new Haslaamispaivakirja_FuseControlsTextControl_Value_Property(btnText, __selector6);
            var temp8 = new global::Fuse.Reactive.Property(temp7, Haslaamispaivakirja_accessor_listBtnCode_Text.Singleton);
            var temp9 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::Fuse.Selection.Selectable();
            temp_Value_inst = new Haslaamispaivakirja_FuseSelectionSelectable_Value_Property(temp, __selector6);
            var temp10 = new global::Fuse.Reactive.Property(temp9, Haslaamispaivakirja_accessor_listBtnCode_DataKey.Singleton);
            var temp11 = new global::Fuse.Reactive.Constant(this);
            btnText_Color_inst = new Haslaamispaivakirja_FuseControlsTextControl_Color_Property(btnText, __selector5);
            mitateit_vihanhallinanmenetelma_Value_inst = new Haslaamispaivakirja_FuseControlsTextInputControl_Value_Property(__parent.mitateit_vihanhallinanmenetelma, __selector6);
            var temp12 = new global::Fuse.Reactive.Constant(this);
            var temp1 = new global::Fuse.Animations.Change<float4>(btnBackground_Color_inst);
            temp1_Value_inst = new Haslaamispaivakirja_FuseAnimationsChangefloat4_Value_Property(temp1, __selector6);
            var temp13 = new global::Fuse.Reactive.Property(temp11, Haslaamispaivakirja_accessor_listBtnCode_SelectedBgColor.Singleton);
            var temp2 = new global::Fuse.Triggers.Actions.Set<string>(mitateit_vihanhallinanmenetelma_Value_inst);
            temp2_Value_inst = new Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property(temp2, __selector6);
            var temp14 = new global::Fuse.Reactive.Property(temp12, Haslaamispaivakirja_accessor_listBtnCode_DataKey.Singleton);
            var temp15 = new global::Fuse.Controls.Text();
            var temp16 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp17 = new global::Fuse.Effects.DropShadow();
            var temp18 = new global::Fuse.Reactive.DataBinding(btnBackground_Color_inst, temp4, Fuse.Reactive.BindingMode.Read);
            var temp19 = new global::Fuse.Reactive.DataBinding(btnText_FontSize_inst, temp6, Fuse.Reactive.BindingMode.Read);
            var temp20 = new global::Fuse.Reactive.DataBinding(btnText_Value_inst, temp8, Fuse.Reactive.BindingMode.Read);
            var temp21 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp10, Fuse.Reactive.BindingMode.Default);
            var temp22 = new global::Fuse.Selection.WhileSelected();
            var temp23 = new global::Fuse.Triggers.Actions.DebugAction();
            var temp24 = new global::Fuse.Animations.Change<float4>(btnText_Color_inst);
            var temp25 = new global::Fuse.Animations.Scale();
            var temp26 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp13, Fuse.Reactive.BindingMode.Read);
            var temp27 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp14, Fuse.Reactive.BindingMode.Default);
            var temp28 = new global::Fuse.Gestures.Tapped();
            var temp29 = new global::Fuse.Triggers.Actions.DebugAction();
            var temp30 = new global::Fuse.Animations.Change<float4>(btnBackground_Color_inst);
            var temp31 = new global::Fuse.Selection.ToggleSelection();
            var temp32 = new global::Fuse.Selection.Deselected();
            var temp33 = new global::Fuse.Animations.Scale();
            var temp34 = new global::Fuse.Triggers.Actions.Set<string>(mitateit_vihanhallinanmenetelma_Value_inst);
            this.BgColor = "#dad8ff";
            this.SelectedBgColor = "#8bc34a";
            this.FontSize = 16f;
            this.Margin = float4(0f, 3f, 0f, 3f);
            this.Padding = float4(10f, 10f, 10f, 10f);
            this.Name = __selector7;
            this.SourceLineNumber = 41;
            this.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp15.Value = "Valitse";
            temp15.Margin = float4(0f, 5f, 0f, 5f);
            temp15.SourceLineNumber = 47;
            temp15.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp16.Code = "\n\t\t\t\t\t\t\tconsole.log('dropDownSelVal ', dropDownSelVal); \n\t\t\t\t\t\t";
            temp16.LineNumber = 49;
            temp16.FileName = "Components/textDropDown_toimimaton.ux";
            temp16.SourceLineNumber = 49;
            temp16.SourceFileName = "Components/textDropDown_toimimaton.ux";
            btnBackground.CornerRadius = float4(0f, 0f, 0f, 0f);
            btnBackground.Opacity = 0.8f;
            btnBackground.Layer = Fuse.Layer.Background;
            btnBackground.Name = __selector8;
            btnBackground.SourceLineNumber = 53;
            btnBackground.SourceFileName = "Components/textDropDown_toimimaton.ux";
            btnBackground.Children.Add(temp17);
            btnBackground.Bindings.Add(temp18);
            temp17.Size = 2f;
            temp17.Angle = 90f;
            temp17.Distance = 1f;
            temp17.Spread = 0.2f;
            temp17.Color = float4(0f, 0f, 0f, 0.3764706f);
            temp17.SourceLineNumber = 54;
            temp17.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp4.SourceLineNumber = 53;
            temp4.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp3.SourceLineNumber = 53;
            temp3.SourceFileName = "Components/textDropDown_toimimaton.ux";
            btnText.TextAlignment = Fuse.Controls.TextAlignment.Center;
            btnText.Color = float4(0.4f, 0.4f, 0.4f, 1f);
            btnText.Name = __selector9;
            btnText.SourceLineNumber = 57;
            btnText.SourceFileName = "Components/textDropDown_toimimaton.ux";
            btnText.Bindings.Add(temp19);
            btnText.Bindings.Add(temp20);
            temp6.SourceLineNumber = 57;
            temp6.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp5.SourceLineNumber = 57;
            temp5.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp8.SourceLineNumber = 57;
            temp8.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp7.SourceLineNumber = 57;
            temp7.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp.SourceLineNumber = 59;
            temp.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp.Bindings.Add(temp21);
            temp10.SourceLineNumber = 59;
            temp10.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp9.SourceLineNumber = 59;
            temp9.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp22.SourceLineNumber = 61;
            temp22.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp22.Animators.Add(temp1);
            temp22.Animators.Add(temp24);
            temp22.Animators.Add(temp25);
            temp22.Actions.Add(temp23);
            temp22.Actions.Add(temp2);
            temp22.Bindings.Add(temp26);
            temp22.Bindings.Add(temp27);
            temp23.Message = "While Selected!";
            temp23.SourceLineNumber = 62;
            temp23.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp13.SourceLineNumber = 63;
            temp13.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp11.SourceLineNumber = 63;
            temp11.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp24.Value = float4(1f, 1f, 1f, 1f);
            temp25.Factor = 0.95f;
            temp25.Duration = 0.08;
            temp25.Easing = Fuse.Animations.Easing.QuadraticInOut;
            temp2.SourceLineNumber = 67;
            temp2.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp14.SourceLineNumber = 67;
            temp14.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp12.SourceLineNumber = 67;
            temp12.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp28.SourceLineNumber = 70;
            temp28.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp28.Animators.Add(temp30);
            temp28.Actions.Add(temp29);
            temp28.Actions.Add(temp31);
            temp29.Message = "Tapped!";
            temp29.SourceLineNumber = 71;
            temp29.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp30.Value = float4(1f, 1f, 1f, 1f);
            temp30.Duration = 0.08;
            temp31.SourceLineNumber = 73;
            temp31.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp32.SourceLineNumber = 76;
            temp32.SourceFileName = "Components/textDropDown_toimimaton.ux";
            temp32.Animators.Add(temp33);
            temp32.Actions.Add(temp34);
            temp33.Factor = 1f;
            temp33.Duration = 0.08;
            temp33.Easing = Fuse.Animations.Easing.QuadraticInOut;
            temp34.Value = "";
            temp34.SourceLineNumber = 79;
            temp34.SourceFileName = "Components/textDropDown_toimimaton.ux";
            __g_nametable.This = this;
            __g_nametable.Objects.Add(btnBackground);
            __g_nametable.Objects.Add(btnText);
            __g_nametable.Properties.Add(this_Text_inst);
            __g_nametable.Properties.Add(this_DataKey_inst);
            __g_nametable.Properties.Add(this_BgColor_inst);
            __g_nametable.Properties.Add(this_SelectedBgColor_inst);
            __g_nametable.Properties.Add(this_FontSize_inst);
            this.Children.Add(temp15);
            this.Children.Add(temp16);
            this.Children.Add(btnBackground);
            this.Children.Add(btnText);
            this.Children.Add(temp);
            this.Children.Add(temp22);
            this.Children.Add(temp28);
            this.Children.Add(temp32);
        }
        static global::Uno.UX.Selector __selector0 = "Text";
        static global::Uno.UX.Selector __selector1 = "DataKey";
        static global::Uno.UX.Selector __selector2 = "BgColor";
        static global::Uno.UX.Selector __selector3 = "SelectedBgColor";
        static global::Uno.UX.Selector __selector4 = "FontSize";
        static global::Uno.UX.Selector __selector5 = "Color";
        static global::Uno.UX.Selector __selector6 = "Value";
        static global::Uno.UX.Selector __selector7 = "listBtnCode";
        static global::Uno.UX.Selector __selector8 = "btnBackground";
        static global::Uno.UX.Selector __selector9 = "btnText";
    }
    global::Uno.UX.Property<string> mitateit_vihanhallinanmenetelma_Value_inst;
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> DropDownShow_Visibility_inst;
    global::Uno.UX.Property<float> DropDownShow_Opacity_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    global::Uno.UX.Property<string> this_Send_inst;
    global::Uno.UX.Property<object> this_dropDownList_inst;
    internal global::basic.TextBoxAction mitateit_vihanhallinanmenetelma;
    internal global::Fuse.Reactive.EventBinding temp_eb25;
    internal global::Fuse.Controls.StackPanel DropDownShow;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "mitateit_vihanhallinanmenetelma",
        "temp_eb25",
        "DropDownShow"
    };
    static textDropDown_toimimaton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public textDropDown_toimimaton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_dropDownList_inst = new Haslaamispaivakirja_textDropDown_toimimaton_dropDownList_Property(this, __selector0);
        this_Send_inst = new Haslaamispaivakirja_textDropDown_toimimaton_Send_Property(this, __selector1);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        mitateit_vihanhallinanmenetelma = new global::basic.TextBoxAction();
        mitateit_vihanhallinanmenetelma_Value_inst = new Haslaamispaivakirja_FuseControlsTextInputControl_Value_Property(mitateit_vihanhallinanmenetelma, __selector2);
        var temp2 = new global::Fuse.Reactive.Data("dropDownSelVal");
        var temp3 = new global::Fuse.Reactive.Data("dropDownTrigger");
        var temp4 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new Haslaamispaivakirja_FuseReactiveEach_Items_Property(temp, __selector3);
        var temp5 = new global::Fuse.Reactive.Property(temp4, Haslaamispaivakirja_accessor_textDropDown_toimimaton_dropDownList.Singleton);
        DropDownShow = new global::Fuse.Controls.StackPanel();
        DropDownShow_Visibility_inst = new Haslaamispaivakirja_FuseElementsElement_Visibility_Property(DropDownShow, __selector4);
        DropDownShow_Opacity_inst = new Haslaamispaivakirja_FuseElementsElement_Opacity_Property(DropDownShow, __selector5);
        var temp1 = new global::Fuse.Triggers.WhileTrue();
        temp1_Value_inst = new Haslaamispaivakirja_FuseTriggersWhileBool_Value_Property(temp1, __selector2);
        var temp6 = new global::Fuse.Reactive.Data("DropDownVisible");
        var temp7 = new global::Fuse.Reactive.Data("entrystr");
        var temp8 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp9 = new global::Fuse.Controls.StackPanel();
        var temp10 = new global::Fuse.Reactive.DataBinding(mitateit_vihanhallinanmenetelma_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        temp_eb25 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp11 = new global::Fuse.Controls.Text();
        var temp12 = new global::Fuse.Controls.StackPanel();
        var temp13 = new Template(this, this);
        var temp14 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp15 = new global::Fuse.Animations.Change<Fuse.Elements.Visibility>(DropDownShow_Visibility_inst);
        var temp16 = new global::Fuse.Animations.Change<float>(DropDownShow_Opacity_inst);
        var temp17 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp18 = new global::Fuse.Reactive.DataBinding(this_Send_inst, temp7, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/textDropDown_toimimaton.ux";
        temp8.Code = "\n\t\tvar Observable = require(\"FuseJS/Observable\");\n\t\tvar DropDownVisible = Observable(false);\n\t\tvar selectThisOption = Observable();\n\t\tvar dropDownSelVal = Observable();\n\n\t\tfunction dropDownTrigger(){\n\t\t\tconsole.log('klikki');\n\t\t\tselectedFunc(); \n\t\t\tif(DropDownVisible.value){\n\t\t\t\tDropDownVisible.value = false;\n\t\t\t}else{\n\t\t\t\tDropDownVisible.value = true;\n\t\t\t}\n\t\t}\n\n\t\tfunction selectedFunc(a) {\n\t\t\tconsole.log('a --> ', a);\n\t\t\tconsole.log('sele ', selectThisOption.value );  \n\t\t}\n\n\t\tmodule.exports = {\n\t\t\tDropDownVisible:DropDownVisible,\n\t\t\tdropDownTrigger:dropDownTrigger,\n\t\t\tdropDownSelVal:dropDownSelVal\n\t\t};\n\t";
        temp8.LineNumber = 5;
        temp8.FileName = "Components/textDropDown_toimimaton.ux";
        temp8.SourceLineNumber = 5;
        temp8.SourceFileName = "Components/textDropDown_toimimaton.ux";
        temp9.SourceLineNumber = 33;
        temp9.SourceFileName = "Components/textDropDown_toimimaton.ux";
        temp9.Children.Add(mitateit_vihanhallinanmenetelma);
        temp9.Children.Add(DropDownShow);
        mitateit_vihanhallinanmenetelma.PlaceholderText = "Käytin vihanhallinan menetelmää (mitä)";
        mitateit_vihanhallinanmenetelma.PlaceholderColor = float4(1f, 1f, 1f, 0.6980392f);
        mitateit_vihanhallinanmenetelma.Margin = float4(0f, 0f, 0f, 0f);
        mitateit_vihanhallinanmenetelma.Name = __selector6;
        mitateit_vihanhallinanmenetelma.SourceLineNumber = 34;
        mitateit_vihanhallinanmenetelma.SourceFileName = "Components/textDropDown_toimimaton.ux";
        global::Fuse.Gestures.Clicked.AddHandler(mitateit_vihanhallinanmenetelma, temp_eb25.OnEvent);
        mitateit_vihanhallinanmenetelma.Bindings.Add(temp10);
        mitateit_vihanhallinanmenetelma.Bindings.Add(temp_eb25);
        temp2.SourceLineNumber = 34;
        temp2.SourceFileName = "Components/textDropDown_toimimaton.ux";
        temp3.SourceLineNumber = 34;
        temp3.SourceFileName = "Components/textDropDown_toimimaton.ux";
        DropDownShow.Visibility = Fuse.Elements.Visibility.Collapsed;
        DropDownShow.Opacity = 0.1f;
        DropDownShow.Name = __selector7;
        DropDownShow.SourceLineNumber = 36;
        DropDownShow.SourceFileName = "Components/textDropDown_toimimaton.ux";
        DropDownShow.Children.Add(temp11);
        DropDownShow.Children.Add(temp12);
        DropDownShow.Children.Add(temp1);
        temp11.Value = "Valitse";
        temp11.Margin = float4(0f, 5f, 0f, 5f);
        temp11.SourceLineNumber = 37;
        temp11.SourceFileName = "Components/textDropDown_toimimaton.ux";
        temp12.SourceLineNumber = 38;
        temp12.SourceFileName = "Components/textDropDown_toimimaton.ux";
        temp12.Children.Add(temp);
        temp.SourceLineNumber = 39;
        temp.SourceFileName = "Components/textDropDown_toimimaton.ux";
        temp.Templates.Add(temp13);
        temp.Bindings.Add(temp14);
        temp5.SourceLineNumber = 39;
        temp5.SourceFileName = "Components/textDropDown_toimimaton.ux";
        temp4.SourceLineNumber = 39;
        temp4.SourceFileName = "Components/textDropDown_toimimaton.ux";
        temp1.SourceLineNumber = 93;
        temp1.SourceFileName = "Components/textDropDown_toimimaton.ux";
        temp1.Animators.Add(temp15);
        temp1.Animators.Add(temp16);
        temp1.Bindings.Add(temp17);
        temp15.Value = Fuse.Elements.Visibility.Visible;
        temp15.DelayBack = 0.26;
        temp15.Delay = 0;
        temp16.Value = 1f;
        temp16.Duration = 0.36;
        temp6.SourceLineNumber = 93;
        temp6.SourceFileName = "Components/textDropDown_toimimaton.ux";
        temp7.SourceLineNumber = 1;
        temp7.SourceFileName = "Components/textDropDown_toimimaton.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(mitateit_vihanhallinanmenetelma);
        __g_nametable.Objects.Add(temp_eb25);
        __g_nametable.Objects.Add(DropDownShow);
        __g_nametable.Properties.Add(this_dropDownList_inst);
        __g_nametable.Properties.Add(this_Send_inst);
        this.Children.Add(temp8);
        this.Children.Add(temp9);
        this.Bindings.Add(temp18);
    }
    static global::Uno.UX.Selector __selector0 = "dropDownList";
    static global::Uno.UX.Selector __selector1 = "Send";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "Items";
    static global::Uno.UX.Selector __selector4 = "Visibility";
    static global::Uno.UX.Selector __selector5 = "Opacity";
    static global::Uno.UX.Selector __selector6 = "mitateit_vihanhallinanmenetelma";
    static global::Uno.UX.Selector __selector7 = "DropDownShow";
}
