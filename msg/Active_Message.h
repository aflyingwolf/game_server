/**
 * struct Active_Message description
 *
 * [This file was auto-generated. PLEASE DONT EDIT]
 *
 * @copyright urentech.com
 *
 */



#ifndef ACTIVE_MESSAGE_H_
#define ACTIVE_MESSAGE_H_

#include <cstring>
#include "Block_Buffer.h"
#include "Msg_Struct.h"
#include "Public_Struct.h"


struct MSG_300000 {

	MSG_300000(void);

	void serialize(Block_Buffer & w) const;

	int deserialize(Block_Buffer & r);

	void reset(void);
};
/*

	背包物品更新

	备注：见type的说明
*/
struct MSG_300100 {

	std::vector<Item_Basic_Info> item_info;

	MSG_300100(void);

	void serialize(Block_Buffer & w) const;

	int deserialize(Block_Buffer & r);

	void reset(void);
};
/*

	物品附加信息更新
*/
struct MSG_300101 {

	int8_t type;/*0:背包 1:商店 2:交易市场 3:邮件附件 4:交易系统*/

	MSG_300101(void);

	void serialize(Block_Buffer & w) const;

	int deserialize(Block_Buffer & r);

	void reset(void);
};
/*

	背包容量改变
*/
struct MSG_300102 {

	int32_t type;/*区分背包、仓库......使用index的起始值。如PACKAGE_INDEX = 20000*/

	int16_t capacity;/*当前容量*/

	MSG_300102(void);

	void serialize(Block_Buffer & w) const;

	int deserialize(Block_Buffer & r);

	void reset(void);
};
/*

	金钱更新
*/
struct MSG_300103 {

	Money money;

	MSG_300103(void);

	void serialize(Block_Buffer & w) const;

	int deserialize(Block_Buffer & r);

	void reset(void);
};
/*

	背包物品删除

	备注：在某个格子中的物品全部被删除才会发送这条消息，若格子中还剩余物品，物品信息会在背包物品更新消息中发送。
*/
struct MSG_300104 {

	std::vector<uint32_t> item_erased;/*被删除的物品位置*/

	MSG_300104(void);

	void serialize(Block_Buffer & w) const;

	int deserialize(Block_Buffer & r);

	void reset(void);
};


#endif