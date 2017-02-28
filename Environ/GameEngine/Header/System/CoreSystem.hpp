#pragma once
namespace Environ {
	//アプリケーション全体のシステム
	//シングルトン設計する
	/**
	 * @class CoreSystem
	 *
	 * @brief 
	*/
	class CoreSystem
	{
	public:

		class __CoreSystem;
	private:
		/**
			@brief 使用しない		
		*/
		CoreSystem();
		/**
		@brief 使用しない
		*/
		~CoreSystem();

		static bool SetupWizard();

	};

}